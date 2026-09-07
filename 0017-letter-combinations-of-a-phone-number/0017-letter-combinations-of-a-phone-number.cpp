class Solution {
public:

    void solve(string mapping[], int index, vector<string>& ans,
               string& digits, string& output) {

        // Combination complete
        if(index >= digits.size()) {
            ans.push_back(output);
            return;
        }

        int number = digits[index] - '0';

        string value = mapping[number];

        for(int i = 0; i < value.size(); i++) {

            // choose
            output.push_back(value[i]);

            // next digit
            solve(mapping, index + 1, ans, digits, output);

            // undo
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {

        vector<string> ans;

        if(digits.size() == 0) {
            return ans;
        }

        string output = "";
        int index = 0;

        string mapping[10] = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        solve(mapping, index, ans, digits, output);

        return ans;
    }
};