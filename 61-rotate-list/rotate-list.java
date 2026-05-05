/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        if(head==null || head.next==null) return head;

        int n = 1;
        ListNode temp = head;

        while(temp.next!=null){
            temp = temp.next;
            n++;
        }

        // System.out.println(temp.val);

        k = k%n;
        if(k==0) return head;

        int rot = n-k-1;
        ListNode temp1 = head;

        while(rot!=0){
            temp1 = temp1.next;
            rot--;
        }

        ListNode temp2 = temp1.next;
        temp1.next= null;
        temp.next = head;

        return temp2;
    }
}