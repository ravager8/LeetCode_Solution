class Solution {
public:
    string compressedString(string word) {

        int n = word.size();
        string ans = "";
        int len = 1;
        char prev = word[0];

        for(int i=1;i<n;i++){
            if(word[i]!=prev or len==9){
                ans += ('0' + len);
                ans += prev;
                len = 1;
                prev = word[i];
            } else{
                len++;
            }
        }

        ans += ('0' + len);
        ans += prev;

        return ans;
        
    }
};