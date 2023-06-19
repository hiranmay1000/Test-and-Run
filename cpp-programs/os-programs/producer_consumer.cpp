#include<iostream>
using namespace std;

#define N 100                            // No of slots in the buffer
typedef int semaphore;                   // semephores are a special kind of int   
semaphore mutex = 1;                     // control access to critical region
semaphore empty = N;                     // counts empty buffer slots
semaphore full = 0;                      // counts full buffer slots

void producer(void) {
    int item;
    while (true) {                       // Infinite loop
        produce_item(item);              // Generate something to put into it
        down(&empty);                    // Decrement empty count
        down(&mutex);                    // Enter critical region
        insert_item(item);               // Put new item into the buffer
        up(&mutex);                      // Leave critical region
        up(&full);                       // Increment count of full slots
    }
}

void consumer(void) {
    int item;
    while (true) {                       // Infinite loop
        down(&empty);                    // Decrement empty count
        down(&mutex);                    // Enter critical region
        remove_item(item);               // Remove item from the buffer
        up(&mutex);                      // Leave critical region
        up(&empty);                      // Increment count of empty slots
        consume_item(item);              // Generate something new to put again into it
    }

}

int main()
{
    producer();
    consumer();
    return 0;
}