// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         vector<int> arr(nums.begin(),nums.end());
//         sort(arr.begin(),arr.end());

//         for(int i=0;i<nums.size();i++){
//             if(nums == arr){
//             return true;
//             }
//             rotate(nums.begin(), nums.begin() + 1, nums.end());
//         }
//     return false;
//     }
// };


class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;

        //array is sorted
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                cnt++;
            }
        }

        //array is rotated
        if(nums[n-1]>nums[0]){
            cnt++;
        }

        return cnt<=1;
    }
};
