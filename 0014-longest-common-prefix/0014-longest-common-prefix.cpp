class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        if (s.empty()) return "";
        
        string ans = "";
        for (int i = 0; i < s[0].length(); i++) { 
            char currentChar = s[0][i]; 
            for (int j = 1; j < s.size(); j++) { 
                if (i >= s[j].length() || s[j][i] != currentChar) {
                    return ans; 
                }
            }
            ans += currentChar; 
        }
        return ans; 
    }
};
