class MyCircularDeque {

public:
    int *arr;
    int size;
    int front;
    int rear;
    int count;

public:
    // Initializes the deque with a maximum size of k.
    MyCircularDeque(int size) {
        arr = new int[size];
        this->size = size;
        front = 0;
        rear = 0;
        count = 0;
    }
    
    //front
    bool insertFront(int value) {
       if (isFull()) return false;
        front = (front - 1 + size) % size; // Circular behavior for front
        arr[front] = value;
        count++;
        return true;
    }
    
    // Adds an item at the rear of Deque. Returns true if successful.
    bool insertLast(int value) {
        if (isFull()) return false;
        arr[rear] = value;
        rear = (rear + 1) % size; // Circular behavior for rear
        count++;
        return true;
    }
    
    // front of Deque
    bool deleteFront() {
        if (isEmpty()) return false;
        front = (front + 1) % size; // Move front forward
        count--;
        return true;
    }
    
    // rear of Deque
    bool deleteLast() {
        if (isEmpty()) return false;
        rear = (rear - 1 + size) % size; // Move rear backward
        count--;
        return true;
    }

    // front item from the Deque.
    int getFront() {
        if (isEmpty()) return -1;
        return arr[front];
    }
    
    // last item from Deque
    int getRear() {
        if (isEmpty()) return -1;
        return arr[(rear - 1 + size) % size];
    }
    
    // deque is empty
    bool isEmpty() {
        return count == 0;
    }
    
    // deque is full
    bool isFull() {
        return count == size;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */