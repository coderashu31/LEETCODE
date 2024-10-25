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