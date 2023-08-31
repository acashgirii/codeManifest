#include <iostream>
#include <cstdlib>
#include <cstring>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>

#define BUFFER_SIZE 1024
#define PACKET_LOSS_PROBABILITY 0.3

// Function to simulate packet loss based on a given probability
bool simulatePacketLoss(float probability)
{
    float random = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
    return random < probability;
}

int main()
{
    int serverSocket, clientSocket;
    struct sockaddr_in serverAddress{}, clientAddress{};
    char buffer[BUFFER_SIZE];

    // Create UDP socket
    serverSocket = socket(AF_INET, SOCK_DGRAM, 0);
    if (serverSocket < 0)
    {
        std::cerr << "Error creating socket." << std::endl;
        return -1;
    }

    // Server address configuration
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(8888);
    serverAddress.sin_addr.s_addr = INADDR_ANY;

    // Bind socket to server address
    if (bind(serverSocket, (struct sockaddr *)&serverAddress, sizeof(serverAddress)) < 0)
    {
        std::cerr << "Error binding socket." << std::endl;
        return -1;
    }

    // Wait for incoming packets
    while (true)
    {
        socklen_t clientAddressLength = sizeof(clientAddress);

        // Receive packet from client
        int bytesRead = recvfrom(serverSocket, buffer, BUFFER_SIZE, 0, (struct sockaddr *)&clientAddress, &clientAddressLength);
        if (bytesRead < 0)
        {
            std::cerr << "Error receiving packet." << std::endl;
            return -1;
        }

        // Simulate packet loss
        if (simulatePacketLoss(PACKET_LOSS_PROBABILITY))
        {
            std::cout << "Packet lost!" << std::endl;
            continue;
        }

        // Display received packet
        buffer[bytesRead] = '\0';
        std::cout << "Received packet from client: " << buffer << std::endl;

        // Send acknowledgment to client
        if (sendto(serverSocket, buffer, strlen(buffer), 0, (struct sockaddr *)&clientAddress, clientAddressLength) < 0)
        {
            std::cerr << "Error sending acknowledgment." << std::endl;
            return -1;
        }
    }

    // Close the socket
    close(serverSocket);

    return 0;
}
