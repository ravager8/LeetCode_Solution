class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) 
    {
        unordered_set<string> s;
        int n = arr1.size();
        int n2 = arr2.size();
        int ans = 0;

        for(int i=0;i<n;i++)
        {
            string temp = to_string(arr1[i]);
            string temp2 = "";

            for(int j=0;j<temp.size();j++)
            {
                temp2 += temp[j];

                s.insert(temp2);
            }
        }

        for(int i=0;i<n2;i++)
        {
            string temp1 = to_string(arr2[i]);
            string temp2 = "";

            for(int j=0;j<temp1.size();j++)
            {
                temp2 += temp1[j];

                if(s.count(temp2))
                {
                    int k = temp2.size();
                    ans = max(ans,k);
                }
            }
        }

        return ans;
    }
};