class Solution {
public:
    void sortColors(vector<int>& nums) {

        int n = nums.size();
        int i = 0;
        int j = n-1;
        int k = 0;

        while(k<=j){

            if(nums[k]==0){

                int temp = nums[i];
                nums[i] = nums[k];
                nums[k] = temp;
                i++;

            } else if (nums[k]==2){

                int temp = nums[j];
                nums[j] = 2;
                nums[k] = temp;
                j--;

            } else k++;

            k = max(k,i);
        }
      // 2 0 2 1 1 0
      // 
    }
};