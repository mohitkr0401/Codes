#include <iostream>
#include <thread>
#include <mutex>
#include <semaphore.h>
#include <unistd.h>
using namespace std;
// Define semaphores and mutex
sem_t semaphoreMutex, semaphoreWrt;
int readCount = 0;
// Shared data
int sharedValue = 0;
// Reader function
void reader(int readerID)
{
    while (true)
    {
        sem_wait(&semaphoreMutex);
        readCount++;
        if (readCount == 1)
        {
            sem_wait(&semaphoreWrt);
        }
        sem_post(&semaphoreMutex);
        // Reading section
        cout << "Reader " << readerID << " is reading value: " << sharedValue << endl;
        usleep(1000000); // Simulating reading time
        sem_wait(&semaphoreMutex);
        readCount--;
        if (readCount == 0)
        {
            sem_post(&semaphoreWrt);
        }
        sem_post(&semaphoreMutex);

        // Sleep to simulate time between readings
        usleep(1000000);
    }
}

// Writer function
void writer(int writerID)
{
    while (true)
    {
        sem_wait(&semaphoreWrt);
        // Writing section
        sharedValue++;
        cout << "Writer " << writerID << " is writing value: " << sharedValue << endl;
        usleep(2000000); // Simulating writing time
        sem_post(&semaphoreWrt);
        // Sleep to simulate time between writings
        usleep(2000000);
    }
}
int main()
{
    // Initialize semaphores
    sem_init(&semaphoreMutex, 0, 1);
    sem_init(&semaphoreWrt, 0, 1);
    const int numReaders = 3;
    const int numWriters = 2;
    // Create reader threads
    thread readers[numReaders];
    for (int i = 0; i < numReaders; ++i)
    {
        readers[i] = thread(reader, i + 1);
    }
    // Create writer threads
    thread writers[numWriters];
    for (int i = 0; i < numWriters; ++i)
    {
        writers[i] = thread(writer, i + 1);
    }
    // Join threads
    for (int i = 0; i < numReaders; ++i)
    {
        readers[i].join();
    }
    for (int i = 0; i < numWriters; ++i)
    {
        writers[i].join();
    }
    // Destroy semaphores
    sem_destroy(&semaphoreMutex);
    sem_destroy(&semaphoreWrt);
    printf("\nMohit Kumar \nIT-03\n04076803121");
    return 0;
}
