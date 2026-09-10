class Solution {
public:

    string findLine(int i, int j, vector<string>& words, int maxWidth, int extraSpaceGaddha, int eachGaddhaSpace) {

        string line = "";

        for(int k = i; k < j; k++) {

            line += words[k];

            if(k == j - 1) {
                // last word of my line - no space after last word of a line
                // We would have already added the spaces in all other words
                // apart from last word
                continue;
            }

            for(int z = 1; z <= eachGaddhaSpace; z++) {
                line += " ";
            }

            if(extraSpaceGaddha > 0) {
                line += " ";
                extraSpaceGaddha--;
            }
        }

        while(line.size() < maxWidth) {
            line += " ";
        }

        return line;
    }

    vector<string> fullJustify(vector<string>& words, int maxWidth) {

        vector<string> result;
        int n = words.size();
        int i = 0;

        while(i < n) {

            int lettersCount = words[i].size();
            int j = i + 1;
            int gaddhe = 0;

            while(j < n &&
                  words[j].size() + 1 + gaddhe + lettersCount <= maxWidth) {

                lettersCount += words[j].size();
                gaddhe++;
                j++;
            }

            int remainingGaddhe = maxWidth - lettersCount;

            int eachGaddhaSpace =
                gaddhe == 0 ? 0 : remainingGaddhe / gaddhe;

            int extraSpaceGaddha =
                gaddhe == 0 ? 0 : remainingGaddhe % gaddhe;

            if(j == n) {
                // Last line - Left justified
                eachGaddhaSpace = 1;
                extraSpaceGaddha = 0;
            }

            result.push_back(
                findLine(i, j, words, maxWidth, extraSpaceGaddha, eachGaddhaSpace)
            );

            i = j;
        }

        return result;
    }
};