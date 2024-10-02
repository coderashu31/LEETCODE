class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        // Copy the original array to arr2
        vector<int> arr2 = arr;
        
        // Sort arr2 to determine the rank order
        sort(arr2.begin(), arr2.end());

        // Use an unordered_map to assign ranks, avoiding duplicates
        unordered_map<int, int> mp;
        int rank = 1; 
        for (int x : arr2) {
            // If the element is not already in the map, assign it a rank
            if (mp.find(x) == mp.end()) {
                mp[x] = rank++;
            }
        }

        // Create the result array by mapping original values to their ranks
        vector<int> result;
        for (int x : arr) {
            // Replace each element with its corresponding rank
            result.push_back(mp[x]); 
        }

        // Return the result array with ranks
        return result;
    }
};
