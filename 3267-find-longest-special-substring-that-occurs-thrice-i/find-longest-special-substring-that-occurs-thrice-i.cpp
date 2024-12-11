class Solution {
public:
    int maximumLength(string s) {
        
        int ans = 0;
        int n = s.size();
        unordered_map<string,int> mp;

        for(int i=0;i<n;i++){

            string temp = "";
            temp += s[i];
            char t = s[i];

            mp[temp]++;

            for(int j=i+1;j<n;j++){

                if(s[j]==t)
                temp += t;
                else
                break;

                mp[temp]++;
            }
        }

        for(auto i:mp){

            if(i.second>=3){

                string x = i.first;
                int size = x.size();
                ans = max(ans,size);
            }
            
        }

        return ans!=0?ans:-1;
    }
};