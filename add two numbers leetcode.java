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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode new_node=new ListNode(0);
        ListNode head=new_node;
        ListNode l3=head;
        int carry=0;
        while(l1!=null || l2!=null){
            int x=(l1!=null) ? l1.val : 0;
            int y=(l2!=null) ? l2.val : 0;
            int sum=x+y+carry;
            int last_digit=sum%10;
            carry =sum/10;
            ListNode new_nodee=new ListNode(last_digit);
            if(l1!=null) l1=l1.next;
            if(l2!=null) l2=l2.next;
            l3.next=new_nodee;
            l3=l3.next;
        }
        if(carry>0){
            ListNode new_nodeee=new ListNode(carry);
            l3.next=new_nodeee;
        }
        return head.next;
    }
}