class Solution {
public:
    int fib(int n) {
        if (n==0) return 0;
        if (n==1 || n==2) return 1;

        int n1=1, n2=1, nth=0;
        for (int index=3; index<=n; index++) {
            nth = n1+n2;
            n1=n2;
            n2=nth;
        }
        return nth;
    }
};