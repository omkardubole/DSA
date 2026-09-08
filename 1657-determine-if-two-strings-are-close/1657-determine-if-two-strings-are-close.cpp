class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();

        if(m != n) {
            return false;
        }

        vector<int> freq1(26);
        vector<int> freq2(26);

        for(int i=0; i<n; i++) {
            char ch = word1[i];

            int idx = ch - 'a';

            freq1[idx]++;
        }

        for(int i=0; i<m; i++) {
            char ch = word2[i];

            int idx = ch - 'a';

            freq2[idx]++;
        }
        //1st point ==> jo character word1 me hai wahi same character word2 me bhi hona chahiye
        for(int i=0; i<26; i++) {
            if(freq1[i] != 0 && freq2[i] != 0) {
                continue;
            }
            if(freq1[i] == 0 && freq2[i] == 0) {
                continue;
            }
            return false;
        }

        //2nd point ==> jo frequency1 me hai wahi same frequency2 me bhi honi chahiye

        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return freq1 == freq2;

        
    }
};