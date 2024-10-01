class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int j = 1;
        // for(int i = 1; i < nums.size(); i++){
        //     if(nums[i] != nums[i - 1]){
        //         nums[j] = nums[i];
        //         j++;
        //     }
        // }
        // return j;

        set<int> st;
        for(int n:nums){
            st.insert(n);
        }

        nums.clear();
        // for(int n:st){
        //     nums.push_back(n);
        // }

        nums.assign(st.begin(),st.end());
        

        return st.size();
    }
};