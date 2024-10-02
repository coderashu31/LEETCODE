class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> arr2 = arr;
        sort(arr2.begin(),arr2.end());

        unordered_map<int,int> mp; 
        
        int rank = 1;
        for(int x:arr2){
            if(mp.find(x) == mp.end()){
                mp[x] = rank++;
            }
        }

        vector<int> result;
        for(int x:arr){
            result.push_back(mp[x]);
        }
        return result;
    }
};