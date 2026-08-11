class Solution {
public:

    bool possibleHai(vector<int>& piles, long long mid, int h) {

        long long hours = 0;

        for(int p : piles) {

            // Current pile ko speed mid se khane me
            // kitne hours lagenge
            hours += ceil((double)p / mid);
        }

        // Agar h hours ke andar finish ho sakta hai
        return hours <= h;
    }


    int minEatingSpeed(vector<int>& piles, int h) {

        long long l = 1;
        long long r = *max_element(piles.begin(), piles.end());

        int ans = 0;

        while(l <= r) {

            long long mid = l + (r - l) / 2;

            if(possibleHai(piles, mid, h)) {

                // mid speed sufficient hai,
                // aur slow speed try karo
                ans = mid;
                r = mid - 1;
            }
            else {

                // mid speed insufficient hai,
                // speed badhao
                l = mid + 1;
            }
        }

        return ans;
    }
};