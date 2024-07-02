class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int n1 = nums1.size();
        int n2 = nums2.size();

        int t1 = 0;
        int t2 = 0;

        vector<int> ans;

        while(t1<n1 and t2<n2)
        {
            if(nums1[t1]==nums2[t2])
            {
                ans.push_back(nums1[t1]);
                t1++;
                t2++;
            }
            else if(nums1[t1]>nums2[t2])
            t2++;
            else
            t1++;
        }

        return ans;
    }
};