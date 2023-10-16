class Solution {
public:
    
    // double f(int n,int r)
    // {
    //     double n1 = n;
    //     double r1 = r;

    //     if(r==0 or r==n)
    //     return 1;
    //     else if(r==1 or r==n-1)
    //     return n1;

    //     double mn = min(r1,n1-r1);
    //     int i = mn-1;
    //     double x = n1-1;
    //     double y = mn-1;

    //     n1 = n/mn;

    //     while(i>0)
    //     {
    //         n1 = n1*x;
    //         n1 = n1/y;

    //         x--;
    //         y--;

    //         i--;
    //     }

    //     return n1;
    // }

    vector<int> getRow(int rx) 
    {
        vector<int> ans;

        ans.push_back(1);

        // if(rx==0)
        // return {1};

        // for(int i=0;i<=rx;i++)
        // {
        //     double k = f(rx,i);

        //     ans.push_back(k);
        // }

        long long int p = 1;

        for(int i=1;i<=rx;i++)
        {
            long long int nxt = p*(rx-i+1)/i;
            ans.push_back(nxt);

            p = nxt;
        }
        
        return ans;
    }
};