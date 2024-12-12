class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        priority_queue<int> pq;
        int n = gifts.size();
        long long ans = 0;

        for(int i=0;i<n;i++){

            pq.push(gifts[i]);
        }


        while(k){

            int temp = pq.top();
            pq.pop();
            int new_temp = sqrt(temp);
            pq.push(new_temp);
            k--;
        }

        while(!pq.empty()){

            ans += pq.top();
            pq.pop();
        }

        return ans;
    }
};