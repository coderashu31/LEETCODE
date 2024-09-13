class Solution {
public:
    string countAndSay(int n) {
        // Base cases
        if (n == 1) {
            return "1";
        }
        if (n == 2) {
            return "11";
        }

        string s = "11";
        for (int i = 3; i <= n; i++) {
            string t = "";
            s += '&';  // Add a sentinel character to handle the end of the string
            int c = 1;
            for (int j = 1; j < s.length(); j++) {
                if (s[j] != s[j - 1]) {
                    t += to_string(c);  // Append the count of the previous digit
                    t += s[j - 1];      // Append the previous digit
                    c = 1;              // Reset the count for the new digit
                } else {
                    c++;  // Increment count for the current digit
                }
            }
            s = t;  // Move to the next sequence
        }
        return s;
    }
};