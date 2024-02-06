class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) 
    {
        int n = str.size();

        vector<vector<string>> ans;
        if(n==0)
        return ans;

        vector<pair<string,int>> v1;

        for(int i=0;i<n;i++)
        {
            string a = str[i];

            sort(a.begin(),a.end());
            v1.push_back({a,i});
        }

        sort(v1.begin(),v1.end());

        string temp = v1[0].first;

        for(int i=0;i<n;i++)
        {
            vector<string> v2;
            int j = i;

            while(i<n and temp==v1[i].first)
            {
                v2.push_back(str[v1[i].second]);
                i++;
            }

            if(i!=j)
            {
                if(i<n)
                {
                    string k = v1[i].first;
                    temp = k;
                }
                i--;
            }

            ans.push_back(v2);
        }

        return ans;
    }
};