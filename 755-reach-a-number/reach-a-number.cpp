class Solution {
public:
    int reachNumber(int target) 
    {
        if(target<0)
        target = -target;

        int sum = 0;
        int steps = 0;

        while(sum<target or (sum-target)%2!=0)
        {
            steps++;
            sum += steps;
        }

        return steps;
        
        // life sucks.
    }
};