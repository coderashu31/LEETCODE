class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        char ch;

        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            if(ch == '(' || ch == '[' || ch == '{'){
            // got open bracket
            st.push(ch);
            } else {
            if(!st.empty()){
                // got closed bracket
                if(ch == ')' && st.top() == '('){
                    st.pop();
                } else if (ch == ']' && st.top() == '['){
                    st.pop();
                } else if (ch == '}' && st.top() == '{'){
                    st.pop();
                } else {
                    return false;
                }
            } else {
                // stack is empty
                return false;
            }
        }
        }
        if (st.size() == 0){
            return true;
        } else {
            return false;
        }
    }
};