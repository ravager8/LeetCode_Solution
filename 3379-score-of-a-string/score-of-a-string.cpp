class Solution {
public:
    int scoreOfString(string s) 
    {
        int ans = 0;
        int n = s.size();

        for(int i=0;i<n-1;i++)
        {
            int a = (s[i] - 'a') + 97;
            int b = (s[i+1] - 'a') + 97;

            if(a>b)
            ans += (a-b);
            else
            ans += (b-a);
        }

        return ans;
    }
};