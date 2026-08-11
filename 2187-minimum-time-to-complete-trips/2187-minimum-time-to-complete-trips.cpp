class Solution {
public:

bool possibleHai(vector<int>& time,long long mid, int totalTrips) {
    long long actualTrips = 0;

    for(int &t : time) {
       actualTrips += mid/t; 
    }
    return actualTrips >= totalTrips;
}

long long minimumTime(vector<int>& time, int totalTrips) {
    int n = time.size();
        
    long long l = 0;
    long long r = (long long)*min_element(begin(time), end(time)) * totalTrips;

    while(l < r) {

        long long mid = l + (r - l) / 2;

        if(possibleHai(time, mid, totalTrips)) {
            r  = mid;
        }
        else {
            l = mid + 1;
        }
    }
    return l;
    }
};