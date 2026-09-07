class Solution {
public:
    int possibleStringCount(string word) {
        int n = word.size();
        int possibility = 0;

        for(int i=1; i<n; i++) {
            if(word[i] == word[i - 1]) {
                possibility++;
            }
        }
        return possibility + 1;
    }
};