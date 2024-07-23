class Solution {
public:
    static bool camparator(vector<int> &a,vector<int> &b)
    {
        if(a[0]==b[0])
        return a[1]>b[1];
        else
        return a[0]<b[0];
    }

    vector<int> frequencySort(vector<int>& nums) 
    {
        vector<int> ans;
        vector<vector<int>> freq;
        int n = nums.size();
        unordered_map<int,int> mp;

        for(auto i:nums)
        mp[i]++;

        for(auto i:mp)
        freq.push_back({i.second,i.first});

        sort(freq.begin(),freq.end(),camparator);
        n = freq.size();

        for(int i=0;i<n;i++)
        {
            // cout<<freq[i][0]<<" "<<freq[i][1]<<endl;
            while(freq[i][0]>0)
            {
                ans.push_back(freq[i][1]);
                freq[i][0]--;
            }
        }

        return ans;
    }
};