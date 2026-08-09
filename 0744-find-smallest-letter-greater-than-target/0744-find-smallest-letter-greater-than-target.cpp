class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        int low = 0;
        int high = letters.size() - 1;

        while(low <= high) {

            int mid = (low + high) / 2;

            if(letters[mid] > target) {
                high = mid - 1;   // possible answer, go left
            }
            else {
                low = mid + 1;    // need a greater character
            }
        }

        // low points to the smallest character greater than target.
        // If no such character exists, wrap around to first character.
        return letters[low % letters.size()];
    }
};