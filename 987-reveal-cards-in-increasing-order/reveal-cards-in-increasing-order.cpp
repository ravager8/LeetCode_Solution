class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) 
    {
        sort(deck.begin(),deck.end());
        int n = deck.size();

        int x = 0;

        vector<int> ans(n,0);
        queue<int> q;

        for(int i=0;i<n;i++)
        {
            q.push(i);
        }

        while(!q.empty())
        {
            if(q.size()==1)
            {
                ans[q.front()] = deck[x];
                q.pop();
                break;
            }

            int a = q.front();
            q.pop();
            int b = q.front();
            q.pop();
            q.push(b);

            ans[a] = deck[x];
            x++;
        }

        return ans;

    }
};