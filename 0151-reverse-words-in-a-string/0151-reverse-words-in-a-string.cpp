class Solution {
public:
    string reverseWords(string s) {
        // Remove extra spaces and split words
        vector<string> words;
        string temp = "";
        for (char c : s) {
            if (c != ' ') {
                temp += c; // Collect characters for a word
            } else if (!temp.empty()) {
                words.push_back(temp); // Add completed word
                temp = ""; // Reset temp
            }
        }
        if (!temp.empty()) words.push_back(temp); // Add the last word

        // Reverse the order of words
        reverse(words.begin(), words.end());

        // Join words with a single space
        string ans = "";
        for (int i = 0; i < words.size(); i++) {
            ans += words[i];
            if (i != words.size() - 1) ans += " ";
        }
        return ans;
    }
};
