class Solution {
public:
    string removeOuterParentheses(string s) {
         int count = 0;
        string ans = "";
        
        for (char c : s) {
            if (c == '(') {
                if (count > 0) ans.push_back(c); // Add '(' if it's not the outermost
                count++;
            } else {
                count--;
                if (count > 0) ans.push_back(c); // Add ')' if it's not the outermost
            }
        }
        
        return ans;
    }
};