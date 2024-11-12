class Solution {
public:
    string makeFancyString(string s) {
        
        int n = s.size();
        string ans = "";
        char prev = '0';
        int cnt = 0;

        for(int i=0;i<n;i++){
            if(s[i]!=prev){
                ans += s[i];
                prev = s[i];
                cnt = 1;
            } else{
                cnt++;
                if(cnt<=2) ans += s[i];
            }
        }

        return ans;
    }
};