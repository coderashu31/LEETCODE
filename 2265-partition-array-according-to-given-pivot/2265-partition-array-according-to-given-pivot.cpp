class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        int left = 0;
        int right = n-1;

        vector<int> result(n,0);

        for(int i=0; i<n ; i++){
            if( nums[i] < pivot  ){
                result[left] = nums[i];
                left++;
            } 
        }


        int pivotIdx = left;
        for (int i = 0; i < n; i++) {
            if (nums[i] == pivot) {
                result[left] = nums[i];
                left++;
            }
        }


        // Third pass: Place elements greater than pivot
        for (int i = 0; i < n; i++) {
            if (nums[i] > pivot) {
                result[left] = nums[i];
                left++;
            }
        }

        return result;
    }
};