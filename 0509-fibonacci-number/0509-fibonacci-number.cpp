class Solution {
public:

   int fun(int n) {
    
   if(n <= 1) return n;

   int last = fun(n - 1);
   int slast = fun(n - 2);

   return last + slast;

   }

 int fib(int n) {

 return fun(n);


}
};