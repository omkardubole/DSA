class Solution {
public:
    int firstUniqChar(string s) {

        int n = s.size();
        int freq[26] = {0};

        // Step 1: Frequency count
        for(int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }

        // Step 2: Find FIRST unique character
        for(int i = 0; i < n; i++) {

            if(freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};