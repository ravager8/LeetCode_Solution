class Solution {
public:
    int takeCharacters(string s, int k) {

        int cnta = 0,cntb = 0,cntc = 0;
        int n = s.size();
        int ans = s.size();

        for(int i=0;i<s.size();i++){

            if(s[i]=='a') cnta++;
            else if(s[i]=='b') cntb++;
            else cntc++;
        }

        if(cnta<k or cntb<k or cntc<k) return -1;
        
        int l = 0;
        int r = (n- (3*k));

        while(r>=l){
            int mid = l + (r-l)/2;

            int cnta1 = 0;
            int cntb1 = 0;
            int cntc1 = 0;
            bool flag = true;

            for(int i=0;i<mid;i++) {
                if(s[i]=='a') cnta1++;
                else if(s[i]=='b') cntb1++;
                else cntc1++;
            }

            if(cnta-cnta1>=k and cntb-cntb1>=k and cntc-cntc1>=k){
                ans = min(ans,n-mid);
                l = mid+1;
                flag = false;
            } 
            else{
                for(int i=0;i<n-mid;i++){
                    if(s[i]=='a') cnta1--;
                    else if(s[i]=='b') cntb1--;
                    else if(s[i]=='c') cntc1--;
                    
                    if(s[i+mid]=='a') cnta1++;
                    else if(s[i+mid]=='b') cntb1++;
                    else if(s[i+mid]=='c') cntc1++;

                    if(cnta-cnta1>=k and cntb-cntb1>=k and cntc-cntc1>=k){
                        ans = min(ans,n-mid);
                        l = mid+1;
                        flag = false;
                        break;
                    }
                }
            }

            if(flag) r = mid-1;
        }

        return ans;
    }
};














