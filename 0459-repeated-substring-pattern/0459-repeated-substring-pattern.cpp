class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();

        for(int l = n/2; l > 0; l--) {

            if(n % l == 0) {

                int times = n/l;
                string pattern = s.substr(0, l);

                string new_string = "";

                while(times > 0) {
                    new_string = new_string + pattern;
                    times--;
                }

                if(new_string == s) {
                    return true;
                }
            }
        }

        return false;
    }
};