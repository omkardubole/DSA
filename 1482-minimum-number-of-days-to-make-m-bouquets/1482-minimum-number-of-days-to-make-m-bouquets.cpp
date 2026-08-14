class Solution {
public:

    bool possibleHai(vector<int>& bloomDay, int mid, int m, int k) {

        int flowers = 0;
        int bouquets = 0;

        for(int x : bloomDay) {

            if(x <= mid) {

                flowers++;

                if(flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            }
            else {
                flowers = 0;
            }
        }

        return bouquets >= m;
    }


    int minDays(vector<int>& bloomDay, int m, int k) {

        int n = bloomDay.size();

        // Total flowers required
        if(1LL * m * k > n)
            return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while(low < high) {

            int mid = low + (high - low) / 2;

            if(possibleHai(bloomDay, mid, m, k)) {

                // mid days enough hain
                // aur minimum day chahiye
                high = mid;
            }
            else {

                // mid days enough nahi hain
                low = mid + 1;
            }
        }

        return low;
    }
};