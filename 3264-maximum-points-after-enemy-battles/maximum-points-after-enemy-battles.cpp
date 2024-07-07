class Solution {
public:
    long long maximumPoints(vector<int>& enemyEnergies, int currentEnergy) 
    {
        long long ans = 0;
        long long t_e = currentEnergy;
        long long mn = INT_MAX;
        int n = enemyEnergies.size();

        for(int i=0;i<n;i++)
        {
            if(mn > enemyEnergies[i])
            mn = enemyEnergies[i];

            t_e += enemyEnergies[i];
        }

        if(currentEnergy < mn)
        return 0;

        t_e -= mn;

        return t_e/mn;

    }
};