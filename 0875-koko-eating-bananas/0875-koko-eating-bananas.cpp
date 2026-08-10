class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while(low <= high) {

            int mid = (low + high) / 2;

            long long hours = 0;

            // Calculate total hours required at speed mid
            for(int pile : piles) {
                hours += (pile + mid - 1) / mid;
            }

            // Speed mid is enough
            if(hours <= h) {

                // Try to find an even smaller speed
                high = mid - 1;
            }

            // Speed mid is too slow
            else {

                // Increase the speed
                low = mid + 1;
            }
        }

        return low;
    }
};