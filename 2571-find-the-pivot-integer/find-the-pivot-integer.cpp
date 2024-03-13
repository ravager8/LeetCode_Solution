class Solution {
public:
    int pivotInteger(int n) 
    {
        if(n==1)
        return 1;

        // int sum = (n*(n+1))/2;

        // if(sum%2!=0)
        // return -1;
        // else
        // sum = sum/2;

        int l = 1;
        int r = n;

        while(l<=r)
        {
            int mid = (l+r)/2;
            int sum = (n*(n+1))/2;

            if(sum-((mid*(mid+1)))+mid == 0)
            return mid;
            else if(sum-((mid*(mid+1)))+mid > 0)
            l = mid+1;
            else
            r = mid-1;
        }

        return -1;

    }
};