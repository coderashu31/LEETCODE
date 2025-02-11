class Solution {
public:

    void nge(vector<int>& nums1, vector<int>& nums2, int i, int j,vector<int>& ans){
        int k;
        for(k=i+1 ; k< nums2.size(); k++){
            if(nums2[k] > nums1[j]){
                ans.push_back(nums2[k]);
                break;
            }
        }
        if(k == nums2.size()){
            ans.push_back(-1);
        }
    }

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for(int j=0; j<nums1.size(); j++){
            for(int i=0; i<nums2.size(); i++){
                if(nums2[i] == nums1[j]){
                    nge(nums1, nums2, i, j, ans);
                }
            }
        }
        return ans;
    }
};