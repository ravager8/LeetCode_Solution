class Solution {
public:
    int takeCharacters(string s, int k) {

        unordered_map<char,int> mp;
        int n = s.size();
        int ans = n;
        int j = 0;
        int window = 0;

        for(int i=0;i<n;i++) mp[s[i]]++;

        if(mp['a']<k or mp['b']<k or mp['c']<k) return -1;

        for(int i=0;i<n;i++){
            mp[s[i]]--;
            window++;

            while(mp[s[i]]<k){
                mp[s[j]]++;
                j++;
                window--;
            }

            ans = min(ans,n-window);
        }

        return ans;
    }
};














