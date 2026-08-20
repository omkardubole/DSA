class Solution {
public:
    char findTheDifference(string s, string t) {

        int freq[26] = {0};

        // s ke characters ki frequency badhao
        for(char ch : s) {
            freq[ch - 'a']++;
        }

        // t ke characters ki frequency ghatao
        for(char ch : t) {
            freq[ch - 'a']--;
        }

        // Jiski frequency 0 nahi hai,
        // wahi extra character hai
        for(int i = 0; i < 26; i++) {

            if(freq[i] != 0) {
                return 'a' + i;
            }
        }

        return ' ';
    }
};