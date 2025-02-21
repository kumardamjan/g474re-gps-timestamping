/**
 * @file queue.h
 * @brief Implementation of a circular queue.
 *
 * This file contains functions for creating, manipulating, and destroying a circular queue.
 */

#ifndef INC_QUEUE_H_
#define INC_QUEUE_H_

#include <stdint.h>

/**
 * @struct Queue
 * @brief Structure representing a circular queue.
 *
 * @var Queue::capacity
 * Maximum number of elements the queue can hold.
 * @var Queue::front
 * Index of the front element in the queue.
 * @var Queue::rear
 * Index of the rear element in the queue.
 * @var Queue::size
 * Current number of elements in the queue.
 * @var Queue::data
 * Pointer to the array holding the queue elements.
 */
typedef struct {
    uint32_t *data;
    int front;
    int rear;
    int size;
    int capacity;
} Queue;


/**
 * @brief Creates a new queue.
 *
 * Allocates memory for a new queue with the specified capacity and initializes its properties.
 *
 * @param capacity The maximum number of elements the queue can hold.
 * @return Pointer to the newly created queue.
 */
Queue* createQueue(int capacity);


/**
 * @brief Checks if the queue is empty.
 *
 * @param queue Pointer to the queue.
 * @return 1 if the queue is empty, 0 otherwise.
 */
int isEmpty(Queue *queue);


/**
 * @brief Checks if the queue is full.
 *
 * @param queue Pointer to the queue.
 * @return 1 if the queue is full, 0 otherwise.
 */
int isFull(Queue *queue);


int queueSize(Queue *queue);

/**
 * @brief Adds an element to the queue.
 *
 * Inserts a new element at the rear of the queue if it is not full.
 *
 * @param queue Pointer to the queue.
 * @param value The value to enqueue.
 * @return 1 if the value was successfully enqueued, 0 if the queue is full.
 */
int enqueue(Queue *queue, uint32_t value);


/**
 * @brief Removes an element from the queue.
 *
 * Removes and retrieves the front element of the queue if it is not empty.
 *
 * @param queue Pointer to the queue.
 * @param value Pointer to store the dequeued value.
 * @return 1 if the value was successfully dequeued, 0 if the queue is empty.
 */
int dequeue(Queue *queue, uint32_t* value);


/**
 * @brief Frees the memory allocated for the queue.
 *
 * Deallocates the memory for the queue's data array and the queue structure itself.
 *
 * @param queue Pointer to the queue to be freed.
 */
void freeQueue(Queue *queue);

#endif /* INC_QUEUE_H_ */
