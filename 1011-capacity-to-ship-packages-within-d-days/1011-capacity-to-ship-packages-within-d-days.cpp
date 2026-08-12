class Solution {
public:

    bool possibleHai(vector<int>& weights, int capacity, int days) {

        int currentWeight = 0;
        int usedDays = 1;

        for(int w : weights) {

            // Current package fit nahi ho raha
            if(currentWeight + w > capacity) {

                usedDays++;
                currentWeight = w;
            }
            else {
                currentWeight += w;
            }
        }

        return usedDays <= days;
    }


    int shipWithinDays(vector<int>& weights, int days) {

        int low = *max_element(weights.begin(), weights.end());

        int high = 0;

        for(int w : weights) {
            high += w;
        }

        while(low < high) {

            int mid = low + (high - low) / 2;

            if(possibleHai(weights, mid, days)) {

                // Capacity kaam kar rahi hai,
                // aur smaller capacity try karo
                high = mid;
            }
            else {

                // Capacity insufficient hai
                low = mid + 1;
            }
        }

        return low;
    }
};