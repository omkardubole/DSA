class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int low = 0;
        int high = arr.size() - 1;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            // Kitne positive numbers mid ke before missing hain
            int missing = arr[mid] - (mid + 1);

            if(missing < k) {
                // Abhi kth missing number right side me hai
                low = mid + 1;
            }
            else {
                // kth missing number left side me hai
                high = mid - 1;
            }
        }

        // low = kitne elements kth missing number se pehle hain
        return low + k;
    }
};