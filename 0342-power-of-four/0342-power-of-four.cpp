class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        if(n==1)
        return true;

        bool flag = true;

        while(n>4)
        {
            if(n%4!=0)
            flag = false;
            
            n = n/4;
        }

        if(n==4 and flag)
        return true;
        else
        return false;
    }
};