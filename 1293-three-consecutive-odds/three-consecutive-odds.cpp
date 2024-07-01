class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) 
    {
        int n = arr.size();
        int odd_c = 0;
        bool flag = false;

        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                odd_c++;
                if(odd_c==3)
                {
                    flag = true;
                    break;
                }
            }
            else
            odd_c = 0;
        }

        if(flag)
        return true;
        else
        return false;
        
    }
};