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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* tmp = new ListNode(-1);
        tmp->next = head;
        head = tmp;
        ListNode* pre = head;
        ListNode* curr = head->next;
        for (int i = 1; i < left; i++) {
            pre = curr;
            curr = curr->next;
        }
        ListNode* lpre = pre;
        ListNode* ne = curr->next;
        for (int i = 1; i <= right - left + 1; i++) {
            curr->next = pre;
            pre = curr;
            curr = ne;
            if (ne != NULL)
                ne = ne->next;
        }
        lpre->next->next = curr;
        lpre->next = pre;
        return head->next;
    }
};