class MyCircularDeque {

private:
    std::deque<int> dq;  // The deque container from STL
    int maxSize;         // Maximum size of the deque

public:
    // Initializes the deque with a maximum size of k.
     MyCircularDeque(int k) {
        maxSize = k;
    }
    
    // Adds an item at the front of Deque. Returns true if successful, false otherwise.
    bool insertFront(int value) {
        if (dq.size() < maxSize) {
            dq.push_front(value);
            return true;
        }
        return false; // Deque is full
    }
    
    // Adds an item at the rear of Deque. Returns true if successful, false otherwise.
    bool insertLast(int value) {
        if (dq.size() < maxSize) {
            dq.push_back(value);
            return true;
        }
        return false; // Deque is full
    }
    
    // Deletes an item from the front of Deque. Returns true if successful, false otherwise.
    bool deleteFront() {
        if (!dq.empty()) {
            dq.pop_front();
            return true;
        }
        return false; // Deque is empty
    }
    
    // Deletes an item from the rear of Deque. Returns true if successful, false otherwise.
    bool deleteLast() {
        if (!dq.empty()) {
            dq.pop_back();
            return true;
        }
        return false; // Deque is empty
    }

    // Returns the front item from Deque. Returns -1 if the deque is empty.
    int getFront() {
        if (!dq.empty()) {
            return dq.front();
        }
        return -1; // Deque is empty
    }
    
    // Returns the last item from Deque. Returns -1 if the deque is empty.
    int getRear() {
        if (!dq.empty()) {
            return dq.back();
        }
        return -1; // Deque is empty
    }
    
    // Returns true if the deque is empty, false otherwise.
    bool isEmpty() {
        return dq.empty();
    }

    // Returns true if the deque is full, false otherwise.
    bool isFull() {
        return dq.size() == maxSize;
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