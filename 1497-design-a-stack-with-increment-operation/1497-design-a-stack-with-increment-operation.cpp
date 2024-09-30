class CustomStack {

public:
    std::vector<int> st;  // Using vector to manage the stack
    int maxSize;

public:
    CustomStack(int maxSize) {
        this->maxSize = maxSize;
    }
    
    void push(int x) {
        if (st.size() < maxSize) {
            st.push_back(x);
        }
    }

    
    int pop() {
        if (st.empty()) {
            return -1;
        } else {
            int topVal = st.back();
            st.pop_back();
            return topVal;
        }
    }
    
    void increment(int k, int val) {
        int limit = std::min(k, (int)st.size());
        for (int i = 0; i < limit; ++i) {
            st[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */