
#include "CircularQueue.h"

int cal_idx(int idx) {
    if (idx == QUEUE_LEN) return  0;
    else return idx + 1;
}
Queue::CircularQueue():arr{0},front(0),rear(0) {
}

void Queue::enqueue(Data data) {
    this -> rear = cal_idx(this -> rear);
    this -> arr[this -> rear] = data;
}

Data Queue::dequeue() {
    this -> front = cal_idx(this -> front);
    return this -> arr[this -> front];
}

Data Queue::peek() {
    int idx = cal_idx(this -> front);
    return this -> arr[idx];
}

int Queue::empty() {
    if (this -> front == rear) return TRUE;
    else return FALSE;
}

