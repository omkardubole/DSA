#define ll long long
class Solution {
public:
    long long countCommas(long long n) {
        ll result = 0;
        ll start = 1000;

        while(start <= n) {
            result = result + ((n - start) + 1);
            start = start * 1000;
        }
        return result;
    }
};