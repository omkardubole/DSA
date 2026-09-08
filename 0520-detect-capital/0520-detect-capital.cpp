class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        int countCapital = 0;

        for(int i=0; i<n; i++) {
            if(isupper(word[i])){
                countCapital++;
            }
        }

        if(countCapital == n) {
            return true;
        }
        if(countCapital == 0) {
            return true;
        }
        if(countCapital == 1 && isupper(word[0])) {
            return true;
        }

        return false;
        
        }
};