class Solution {
public:
    int numTeams(vector<int>& rating) 
    {
        int n = rating.size();
        int ans = 0;
        int num1 = 0;
        int num2 = 0;
        // int num3 = 0;
        bool mn = true;

        for(int i=0;i<n-2;i++)
        {
            num1 = rating[i];

            for(int j=i+1;j<n-1;j++)
            {
                num2 = rating[j];

                if(num2>num1)
                mn = false;
                else
                mn = true;

                for(int k=j+1;k<n;k++)
                {
                    if(mn==true and rating[k]<num2)
                    {
                        ans++;
                        // cout<<num1<<num2<<rating[k]<<endl;
                    }
                    else if(mn==false and rating[k]>num2)
                    {
                        ans++;
                        // cout<<num1<<num2<<rating[k]<<endl;
                    }
                }
            }
        }

        return ans;
    }
};