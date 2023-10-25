class Solution {
public:
    int kthGrammar(int n, int k) 
    {
        int x = pow(2,n-1);
        int a = 1;

        while(x!=1)
        {
            x = x/2;

            if(k>x)
            {
                k = k-x;
                a = !a;
            }
        }

        return a ? 0:1;
    }
};