#include <iostream>
#include <queue>
#include <thread>
#include <semaphore.h>
#include <atomic>

using namespace std;

queue<int> buffer;
sem_t emptySlots;
sem_t fullSlots;
atomic<bool> isDone(false); // Atomic flag to signal termination to the consumer

void producer(int itemsToProduce, int producerSleepTime) {
    for (int i = 1; i <= itemsToProduce; ++i) {
        sem_wait(&emptySlots);
        buffer.push(i);
        cout << "Produced: " << i << endl;
        sem_post(&fullSlots);
        this_thread::sleep_for(chrono::milliseconds(producerSleepTime));
    }
}

void consumer(int consumerSleepTime) {
    while (true) {
        sem_wait(&fullSlots);

        // Check if termination is requested
        if (isDone.load())
            break;

        int data = buffer.front();
        buffer.pop();
        cout << "Consumed: " << data << endl;
        sem_post(&emptySlots);
        this_thread::sleep_for(chrono::milliseconds(consumerSleepTime));
    }
}

int main() {
    int bufferCapacity, itemsToProduce, producerSleepTime, consumerSleepTime;

    cout << "Enter the buffer capacity: ";
    cin >> bufferCapacity;

    cout << "Enter the number of items to produce: ";
    cin >> itemsToProduce;

    cout << "Enter producer sleep time (milliseconds): ";
    cin >> producerSleepTime;

    cout << "Enter consumer sleep time (milliseconds): ";
    cin >> consumerSleepTime;

    sem_init(&emptySlots, 0, bufferCapacity);  // Maximum bufferCapacity empty slots in the buffer
    sem_init(&fullSlots, 0, 0);                // Initially, no full slots in the buffer

    thread producerThread(producer, itemsToProduce, producerSleepTime);
    thread consumerThread(consumer, consumerSleepTime);

    producerThread.join();

    // Signal the consumer to finish
    isDone.store(true);
    sem_post(&fullSlots);

    // Wait for the consumer to finish
    consumerThread.join();

    sem_destroy(&emptySlots);
    sem_destroy(&fullSlots);

    cout << "Mohit Kumar \nIT-03\n04076803121";

    return 0;
}
