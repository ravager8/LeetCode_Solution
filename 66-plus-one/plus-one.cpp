class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();
        vector<int> ans(n+1);
        vector<int> result(n);
        int y = 0;

        for(int i=n-1;i>=0;i--){
            int x = digits[i]+y;
            if(i==n-1) x+=1;
            if(x<10){
                ans[i] = x;
                y = 0;
            } else {
                y = 1;
                ans[i] = 0;
            }
        }

        if(y!=0) {
            ans[0] = 1;
            result.resize(n+1);
        }

        y = 0;
        n = result.size()-1;
        cout<<result.size();

        for(int i=n;i>=0;i--){
            result[i] = ans[i];
        }

        return result;
    }
};