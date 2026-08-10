class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int low = 0;
        int high = nums.size() - 1;

        while(low < high) {

            int mid = (low + high) / 2;

            // Array is increasing
            if(nums[mid] < nums[mid + 1]) {

                // Peak must be on the right
                low = mid + 1;
            }

            // Array is decreasing
            else {

                // Peak is at mid or on the left
                high = mid;
            }
        }

        return low;
    }
};