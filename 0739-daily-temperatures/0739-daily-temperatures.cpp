class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) 
    {
        int n = t.size();

        vector<int> ans(n,0);
        stack<pair<int,int>> s;

        for(int i=0;i<n;i++)
        {
            if(s.empty())
            s.push({t[i],i});
            else
            {
                while(!s.empty())
                {
                    if(s.top().first < t[i])
                    {
                        int j = s.top().second;

                        ans[j] = i-j;
                        s.pop();
                    }
                    else
                    {
                        s.push({t[i],i});
                        break;
                    } 
                }

                if(s.empty())
                s.push({t[i],i});
            }
        }

        return ans;
    }
};