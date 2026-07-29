class Solution {
    public int[] plusOne(int[] digits) {
        int n = digits.length;
        int[] ans = new int[n+1];
        if(digits[n-1]!=9){
            digits[n-1] = digits[n-1]+1;
            return digits;
        }else{
            int carry = 1;
            for(int i=n-1;i>=0;i--){
                if(digits[i]!=9){
                    digits[i] += carry;
                   return digits;
                }else{
                    digits[i] = 0;
                }
            }
            
            ans[0] = 1; 
            int j = n-1;
            for(int i=1;i<ans.length;i++){
                ans[i] = digits[j];
                j--;
            }
            
        }
        return ans;
    }
}