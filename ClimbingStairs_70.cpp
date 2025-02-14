class Solution {
public:
    int climbStairs(int n) {
         if (n == 1)
          return 1;
    int a=2,b=1 ,c;
    for (int i = 3; i <= n; i++) {
        c= a + b;
        b = a;
        a = c;
    }
    return a;
}
};
