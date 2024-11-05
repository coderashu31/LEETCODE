class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, char> mp;
        unordered_set<char> mapped_chars;

        for (int i = 0; i < s.length(); i++) {
            char ch_s = s[i];
            char ch_t = t[i];

            if (mp.find(ch_s) != mp.end()) {
                // If ch_s is in the map, check if it maps to ch_t
                if (mp[ch_s] != ch_t) {
                    return false;
                }
            } else {
                // If ch_s is not in the map, check if ch_t is already mapped to another character
                if (mapped_chars.find(ch_t) != mapped_chars.end()) {
                    return false;  // ch_t is already mapped by another character in s
                }

                // Insert the new mapping
                mp[ch_s] = ch_t;
                mapped_chars.insert(ch_t);  // Mark ch_t as mapped
            }
        }

        return true;
    }
};