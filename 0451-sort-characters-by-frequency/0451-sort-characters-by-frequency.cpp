class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char, int> mp;

        for(char ch : s) {
            mp[ch]++;
        }

        vector<pair<char, int>> v;

        for(auto it : mp) {
            v.push_back({it.first, it.second});
        }

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        string result = "";

        for(auto it : v) {
            result += string(it.second, it.first);
        }

        return result;
    }
};