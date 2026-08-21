class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.size() != t.size())
            return false;

        vector<int> mapST(128, -1);
        vector<int> mapTS(128, -1);

        for(int i = 0; i < s.size(); i++) {

            int a = s[i];
            int b = t[i];

            // s -> t
            if(mapST[a] != -1 && mapST[a] != b)
                return false;

            // t -> s
            if(mapTS[b] != -1 && mapTS[b] != a)
                return false;

            mapST[a] = b;
            mapTS[b] = a;
        }

        return true;
    }
};