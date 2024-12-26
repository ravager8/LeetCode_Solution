class Solution {
public:
    int f(int i,int sum,vector<int>& nums,int target){

        if(i >= nums.size()) return sum==target?1:0;

        int sub = f(i+1,sum-nums[i],nums,target);
        int add = f(i+1,sum+nums[i],nums,target);

        return sub + add;
    }

    int findTargetSumWays(vector<int>& nums, int target) {

        return f(0,0,nums,target);
    }
};