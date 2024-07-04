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
    ListNode* mergeNodes(ListNode* head) 
    {
        ListNode* temp = new ListNode(-1);
        ListNode* it = head;
        head = temp;
        int sum = 0;
        int cnt_0 = 0;

        while(it!=NULL)
        {
            if(cnt_0==0)
            cnt_0++;
            else if(it->val==0)
            {
                ListNode* n = new ListNode(sum);
                temp->next = n;
                temp = temp->next;
                sum = 0;
            }
            else
            sum += it->val;

            it = it->next;
        }

        return head->next;

    }
};