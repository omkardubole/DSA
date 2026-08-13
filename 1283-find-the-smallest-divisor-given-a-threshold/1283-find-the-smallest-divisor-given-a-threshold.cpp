class Solution {
public:

    bool possibleHai(vector<int>& nums, int divisor, int threshold) {

        long long sum = 0;

        for(int x : nums) {

            sum += (x + divisor - 1) / divisor;
        }

        return sum <= threshold;
    }


    int smallestDivisor(vector<int>& nums, int threshold) {

        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while(low < high) {

            int mid = low + (high - low) / 2;

            if(possibleHai(nums, mid, threshold)) {

                // mid divisor kaam kar raha hai
                // aur chhota divisor try karo
                high = mid;
            }
            else {

                // mid divisor se sum zyada aa raha hai
                // divisor badhana padega
                low = mid + 1;
            }
        }

        return low;
    }
};