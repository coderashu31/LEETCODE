class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp;
        int n = nums2.size();
        stack<int> st;
        vector<int> ans;
        for(int i=n-1; i>=0; i--){
            if(st.empty()){
                st.push(nums2[i]);
                mp[nums2[i]] = -1;
            } 
            else {
                while(!st.empty() && st.top()<nums2[i]){
                
                        st.pop();
                }
                if(st.empty()){
                    mp[nums2[i]] = -1;
                } 
                else {
                    mp[nums2[i]] = st.top();
                } 
                st.push(nums2[i]);
            }
           
        }
        for(int i=0; i<nums1.size();i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};