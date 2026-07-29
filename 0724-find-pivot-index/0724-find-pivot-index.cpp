class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        int leftSum = 0;
        int rightSum = 0;
        
       for(int i=0; i<n; i++) {
           totalSum = totalSum + nums[i];
        }
       for(int i=0; i<n; i++) {
           rightSum = totalSum - leftSum - nums[i];
           if(rightSum == leftSum) {
                return i;
           }
           else {
            leftSum += nums[i];
           }
       }
       return -1; 
    }
};