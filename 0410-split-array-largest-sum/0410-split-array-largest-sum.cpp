class Solution {
public:
    bool possibleHai(vector<int>& nums,int mid, int k) {
        int currentSum = 0;
        int parts = 1;
        for (int x : nums) {
            if(currentSum + x > mid) {
                currentSum = x;
                parts++;
            }
            else {
                currentSum += x; 
            }
        }
        return parts <= k;
        
    }
    int splitArray(vector<int>& nums, int k) {
        int low  = *max_element(nums.begin(), nums.end());
        int high = 0;

        for (int x : nums) {
            high += x;
        }

        while (low < high) {
            int mid = low + (high - low) / 2;

            if(possibleHai(nums, mid, k)) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
    }
};