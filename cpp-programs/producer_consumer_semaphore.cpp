#include <iostream>
#include <thread>
#include <semaphore>

using namespace std;

const int BUFFER_SIZE = 10;
sem_t empty, full;
int buffer[BUFFER_SIZE];
int in = 0, out = 0;

void producer() {
    int item;
    while (true) {
        // Produce item
        item = rand() % 100;
        cout << "Produced item: " << item << endl;
        
        // Wait for an empty slot
        sem_wait(&empty);
        
        // Add item to buffer
        buffer[in] = item;
        in = (in + 1) % BUFFER_SIZE;
        
        // Signal that a slot is now full
        sem_post(&full);
    }
}

void consumer() {
    int item;
    while (true) {
        // Wait for a full slot
        sem_wait(&full);
        
        // Get item from buffer
        item = buffer[out];
        out = (out + 1) % BUFFER_SIZE;
        
        // Signal that a slot is now empty
        sem_post(&empty);
        
        // Consume item
        cout << "Consumed item: " << item << endl;
    }
}

int main() {
    // Initialize semaphores
    sem_init(&empty, 0, BUFFER_SIZE);
    sem_init(&full, 0, 0);
    
    // Create producer and consumer threads
    thread producer_thread(producer);
    thread consumer_thread(consumer);
    
    // Wait for threads to complete
    producer_thread.join();
    consumer_thread.join();
    
    // Clean up semaphores
    sem_destroy(&empty);
    sem_destroy(&full);
    
    return 0;
}
