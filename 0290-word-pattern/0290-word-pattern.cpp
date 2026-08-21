class Solution {
public:
    bool wordPattern(string pattern, string s) {

        vector<string> words;
        string word;

        stringstream ss(s);

        while(ss >> word) {
            words.push_back(word);
        }

        if(pattern.size() != words.size())
            return false;

        unordered_map<char, string> pToWord;
        unordered_map<string, char> wordToP;

        for(int i = 0; i < pattern.size(); i++) {

            char p = pattern[i];
            string w = words[i];

            if(pToWord.count(p) && pToWord[p] != w)
                return false;

            if(wordToP.count(w) && wordToP[w] != p)
                return false;

            pToWord[p] = w;
            wordToP[w] = p;
        }

        return true;
    }
};