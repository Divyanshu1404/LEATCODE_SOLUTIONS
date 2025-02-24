class Solution {
    public int kthGrammar(int n, int k) {
        int l=1,g=0;
        int b = (int) Math.pow(2, (n - 1));
        if(n==1&&k==1)
        {return g=0;}
       while(l<b)
        {int m=(l+b)/2;
        if(m>=k)
        {b=m;}
        else if(m<k)
        {g=1-g;
        l=m+1;}
          }  return g;
 
    }
};
