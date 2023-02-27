class Solution {
public:
    int tribonacci(int n) {

        int a=0, b=1, bb=1, c=0;
        if(n==0)
        return a;
        if(n==1) return b;
        if(n==2) return bb;

        for(int i=3; i<=n;i++)
        {
            c = a + b + bb;
            a = b;
            b = bb;
            bb = c;
        }
        return c;

    }
};