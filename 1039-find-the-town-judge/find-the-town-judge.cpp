class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        vector<int> trusted_by(n+1,0);
        vector<int> who_trusts(n+1,0);

        for(auto i:trust)
        {
            who_trusts[i[0]]++;
            trusted_by[i[1]]++;
        }

        for(int i=1;i<=n;i++)
        {
            if(trusted_by[i]==n-1 and who_trusts[i]==0)
            return i;
        }

        return -1;

    }
};