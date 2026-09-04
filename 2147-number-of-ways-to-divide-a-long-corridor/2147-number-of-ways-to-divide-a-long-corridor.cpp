class Solution {
public:
    int M = 1e9 + 7;

    int numberOfWays(string corridor) {

        int n = corridor.size();

        vector<int> posOfSeat;

        for(int i = 0; i < n; i++) {
            if(corridor[i] == 'S') {
                posOfSeat.push_back(i);
            }
        }

        if(posOfSeat.size() % 2 != 0 || posOfSeat.size() == 0) {
            return 0;
        }

        int prev_end_idx = posOfSeat[1];

        long long result = 1;

        for(int i = 2; i < posOfSeat.size(); i += 2) {

            int length = posOfSeat[i] - prev_end_idx;

            result = (result * length) % M;

            // current pair ka second seat
            prev_end_idx = posOfSeat[i + 1];
        }

        return result;  
    }
};