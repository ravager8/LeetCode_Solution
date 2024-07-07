class Solution {
public:
    int numWaterBottles(int n_b, int n_e) 
    {
        int ans = n_b;
        int empty = n_b;
        int k = empty;

        while(empty >= n_e)
        {
            ans += (k/n_e);
            empty = (k/n_e) + (k%n_e);

            k = empty;
        }

        return ans;
    }
};