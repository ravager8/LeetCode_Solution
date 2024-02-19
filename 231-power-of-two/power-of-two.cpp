class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        if(n<=0)
        return false;

        long long a = pow(2,31)-1;
        vector<int> pot;
        pot.push_back(1);

        long long num = 1;

        while(num <= a-1)
        {
            num *= 2;

            if(num>a-1)
            break;

            pot.push_back(num);
        }

        for(auto i:pot)
        {
            if(i==n)
            return true;
        }

        return false;


    }
};