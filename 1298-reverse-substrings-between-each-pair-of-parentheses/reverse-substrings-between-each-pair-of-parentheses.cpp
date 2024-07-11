class Solution {
public:
    string reverseParentheses(string s) 
    {
        stack<char> st;
        int n = s.size();

        for(int i=0;i<n;i++)
        {
            if(s[i]==')')
            {
                string temp = "";
                while(st.top()!='(')
                {
                    temp += st.top();
                    st.pop();
                }

                st.pop();
                // reverse(temp.begin(),temp.end());

                for(auto j:temp)
                st.push(j);
            }
            else
            st.push(s[i]);
        }

        string ans = "";

        while(!st.empty())
        {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};