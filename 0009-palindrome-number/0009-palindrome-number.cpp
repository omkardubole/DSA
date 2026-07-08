class Solution {
public:
    bool isPalindrome(int x) {
       
        if(x<0) return false;
      if(x % 10 == 0 && x != 0) {
        return false;
      }
         long long rev = 0;
         long long original = x;
       while(x != 0) {
        long long ld = x % 10;
        x /= 10;
        rev = (rev * 10) + ld;
 }
    if ( rev == original) {
        return true;
    }else {
        return false;
    }

        
    }
};