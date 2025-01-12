#include <unordered_map>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        // Step 1: Count the frequency of each character
        unordered_map<char, int> mp;
        for (char x : s) {
            mp[x]++;
        }

        // Step 2: Store characters with their frequencies in a vector
        vector<pair<int, char>> freq;
        for (auto& it : mp) {
            freq.push_back({it.second, it.first}); // Store as (frequency, character)
        }

        // Step 3: Sort the vector by frequency in descending order
        sort(freq.begin(), freq.end(), greater<>());

        // Step 4: Build the result string
        string result = "";
        for (auto& p : freq) {
            result += string(p.first, p.second); // Append the character `p.first` times
        }

        return result;
    }
};
