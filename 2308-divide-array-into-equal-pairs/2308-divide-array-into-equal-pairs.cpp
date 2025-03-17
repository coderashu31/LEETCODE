class Solution {
public:
    bool divideArray(vector<int>& nums) {
// Checking frequency
        unordered_map<int, int> counter;
        for (int num : nums) {
            counter[num]++;
        }
        // Checking if all frequencies are even
        for (auto &[key, value] : counter) {
            if (value % 2 != 0) {
                return false;
            }
        }
        return true;
    }
};