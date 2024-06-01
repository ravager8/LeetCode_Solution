class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> ans;

        for(int i=0;i<=n;i++)
        {
            int num = pow(2,30);
            int num2 = i;
            int cnt1 = 0;

            while(num2>0)
            {
                if(num2>=num)
                {
                    num2 = num2-num;

                    cnt1++;
                }

                num = num/2;
            }

            ans.push_back(cnt1);
        }

        return ans;
    }
};