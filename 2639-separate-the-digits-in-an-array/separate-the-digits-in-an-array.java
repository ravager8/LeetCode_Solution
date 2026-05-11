class Solution {
    public int[] separateDigits(int[] nums) {
        
        List<Integer> ans = new ArrayList<>();
        int n = nums.length;

        for(int i=0;i<n;i++){
            int temp = nums[i];
            List<Integer> temp2 = new ArrayList<>();

            while(temp>0){
                int lastInt = temp%10;
                temp2.add(lastInt);
                temp = temp/10;
            }

            for(int j=temp2.size()-1;j>=0;j--){
                ans.add(temp2.get(j));
            }
        }

        int[] result = new int[ans.size()];

        for(int i=0;i<ans.size();i++){
            result[i] = ans.get(i);
        }

        return result;
    }
}