class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        if(n1>n2)
        {
            return findMedianSortedArrays(nums2,nums1);
        }

        int low = 0;
        int high = n1;

        while(low<=high)
        {
            int mid1 = (low+high+1)/2;
            int mid2 = (n1+n2+1)/2 - mid1;

            int l1 = INT_MIN;
            int l2 = INT_MIN;
            int r1 = INT_MAX;
            int r2 = INT_MAX;
            
            if(mid1>0)
            l1 = nums1[mid1-1];
            if(n1-mid1>0)
            r1 = nums1[mid1];
            if(mid2>0)
            l2 = nums2[mid2-1];
            if(n2-mid2>0)
            r2 = nums2[mid2];

            if(r1>=l2 and r2>=l1)
            {
                if((n1+n2)%2==0)
                {
                    return (max(l1,l2)+min(r1,r2))/2.0 ;
                }
                else
                {
                    return max(l1,l2);
                }
            }
            else if(l1>r2)
            {
                high = mid1 - 1;
            }
            else
            {
                low = mid1 + 1;
            }
        }
        return 0.0;
    }
};