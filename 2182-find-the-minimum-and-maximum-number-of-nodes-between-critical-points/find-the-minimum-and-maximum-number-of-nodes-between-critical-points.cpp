/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) 
    {
        vector<int> ans;
        int prev = 0;
        int next = 0;

        int first_critical = -1;
        int prev_critical = -1;
        int last_critical = -1;
        int mn = INT_MAX;
        int mx = INT_MIN;
        int x = 1;

        while(head!=0)
        {
            if(prev==0)
            {
                prev = head->val;
            }
            else if(head->next!=NULL)
            {
                next = head->next->val;

                if((head->val<prev and head->val<next) or (head->val>prev and head->val>next))
                {
                    if(first_critical == -1)
                    first_critical = x;
                    else
                    {
                        prev_critical = last_critical;
                        last_critical = x;
                    }

                    if(first_critical!=-1 and last_critical!=-1)
                    {
                        mx = max(last_critical-first_critical,mx);
                        mn = min(last_critical-first_critical,mn);
                    }

                    if(first_critical!=-1 and prev_critical!=-1)
                    {
                        mn = min(mn,prev_critical-first_critical);
                        mx = max(mx,prev_critical-first_critical);
                    }

                    if(prev_critical!=-1 and last_critical!=-1)
                    {
                        mn = min(mn,last_critical-prev_critical);
                        mx = max(mx,last_critical-prev_critical);
                    }
                }
            }

            x++;
            prev = head->val;
            head = head->next;
        }

        if(mn == INT_MAX and mx == INT_MIN)
        {
            mn = -1;
            mx = -1;
        }

        ans.push_back(mn);
        ans.push_back(mx);
        return ans;
    }
};







