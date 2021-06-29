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
/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
*/
/*
2. Add Two Numbers
medium
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
