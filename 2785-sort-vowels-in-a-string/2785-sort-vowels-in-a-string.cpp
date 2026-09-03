class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'A' || ch == 'E' || ch == 'I' ||
               ch == 'O' || ch == 'U' ||
               ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u';
    }

    string sortVowels(string s) {

        int freq[128] = {0};

        for(char ch : s) {
            if(isVowel(ch))
                freq[ch]++;
        }

        int j = 0;

        for(int i = 0; i < s.size(); i++) {

            if(isVowel(s[i])) {

                while(freq[j] == 0)
                    j++;

                s[i] = char(j);
                freq[j]--;
            }
        }

        return s;
    }
};