class MyCircularDeque {
// https://www.youtube.com/watch?v=AvdvdBRMfsc&ab_channel=Intuit%26Code
private:
    std::deque<int> dq;
    int maxSize;
public:

    // Initializes the deque with a maximum size of k.
    MyCircularDeque(int k) {
        maxSize = k;
    }

    // Adds an item at the front of Deque. 
    // Returns true if the operation is successful, or false otherwise.
    bool insertFront(int value) {
        if(dq.size()<maxSize){
            dq.push_front(value);
            return true;
        }
        return false;
    }
    
    bool insertLast(int value) {
         if(dq.size()<maxSize){
            dq.push_back(value);
            return true;
        }
        return false;
    }
    
    bool deleteFront() {
        if(!dq.empty()){
            dq.pop_front();
            return true;
        }
        return false;
    }
    
    bool deleteLast() {
        if(!dq.empty()){
            dq.pop_back();
            return true;
        }
        return false;
    }
    
    int getFront() {
        if(!dq.empty()){
           return dq.front();
        }
        return -1;
    }
    
    int getRear() {
        if(!dq.empty()){
           return dq.back();
        }
        return -1;
    }
    
    bool isEmpty() {
        return dq.empty();
    }
    
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