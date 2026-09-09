class Solution {
public:
    int countCommas(int n) {
      return n < 1000 ? 0 : max(n-999, 0);  //negative jaa sakta hai isiliye max of n-999 and 0 kiya hai
    }                                       //taaki negative naa jaaye 
};