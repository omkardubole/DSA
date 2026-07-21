class Solution {
public:

    // Function to generate one row
    vector<int> generateRow(int row) {

        long long ans = 1;
        vector<int> ansRow;

        // First element is always 1
        ansRow.push_back(1);

        // Generate remaining elements
        for(int col = 1; col < row; col++) {

            ans = ans * (row - col);
            ans = ans / col;

            ansRow.push_back(ans);
        }

        return ansRow;
    }

    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;

        // Generate each row
        for(int i = 1; i <= numRows; i++) {

            ans.push_back(generateRow(i));
        }

        return ans;
    }
};