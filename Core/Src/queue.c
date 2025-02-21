#include "queue.h"
#include <stdlib.h>

Queue* createQueue(int capacity) {
  Queue *queue = (Queue *)malloc(sizeof(Queue));
  queue->capacity = capacity;
  queue->front = 0;
  queue->rear = -1;
  queue->size = 0;
  queue->data = (uint32_t *)malloc(capacity * sizeof(uint32_t));
  return queue;
}

int isEmpty(Queue *queue) {
  return queue->size == 0;
}

int queueSize(Queue *queue) {
  return queue->size;
}

int isFull(Queue *queue) {
  return queue->size == queue->capacity;
}

int enqueue(Queue *queue, uint32_t value) {
  if (isFull(queue)) {
    return 0;
  }

  queue->rear = (queue->rear + 1) % queue->capacity;
  queue->data[queue->rear] = value;
  queue->size++;
  return 1;
}

int dequeue(Queue *queue, uint32_t* value) {
  if (isEmpty(queue)) {
        return 0;
    }
    *value = queue->data[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size--;
    return 1;
}

void freeQueue(Queue *queue) {
    free(queue->data);
    free(queue);
}

