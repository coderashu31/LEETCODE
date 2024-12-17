class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int i = 0;
        while (i < s.length()) {
            if (!ans.empty() && ans[ans.length() - 1] == s[i]) {
                ans.pop_back();  // Remove the last character if it's a duplicate
            } else {
                ans.push_back(s[i]);  // Add current character
            }
            i++;  // Move to the next character
        }
        return ans;  // Return the result
    }
};