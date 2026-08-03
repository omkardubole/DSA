class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {

            int x = nums[i];   // Original number copy

            int digits = 0;

            while (x > 0) {
                x = x / 10;
                digits++;
            }

            if (digits % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};