class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> arr(nums.begin(),nums.end());
        sort(arr.begin(),arr.end());

        for(int i=0;i<nums.size();i++){
            if(nums == arr){
            return true;
            }
            rotate(nums.begin(), nums.begin() + 1, nums.end());
        }
    return false;
    }
};