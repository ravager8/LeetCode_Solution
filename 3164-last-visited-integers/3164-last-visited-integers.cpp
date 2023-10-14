class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& w) 
    {
        vector<int> ans;
        int n = w.size();
        
        stack<string> st;
        
        for(int i=0;i<n;i++)
        {   
            if("prev" == w[i])
            {
                stack<string> s1;
                
                while(i<n and w[i]=="prev")
                {
                    if(st.empty())
                    ans.push_back(-1);
                    else
                    {
                        ans.push_back(stoi(st.top()));
                        s1.push(st.top());
                        st.pop();
                    }
                    
                    i++;
                    if(i>=n)
                        break;
                }
                
                while(!s1.empty())
                {
                    st.push(s1.top());
                    s1.pop();
                }
                
                i--;
            }
            else
            {
                st.push(w[i]);
            }
        }
        
        return ans;
    }
};