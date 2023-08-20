int pairSum(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head->next->next;
    while (fast != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode* pre = NULL;
    ListNode* curr = slow->next;
    ListNode* n = curr->next;
    while (curr != NULL) {
        curr->next = pre;
        pre = curr;
        curr = n;
        if (n != NULL)
            n = n->next;
    }
    slow = head;
    int ma = 0;
    while (slow != NULL && pre != NULL) {
        ma = max(ma, slow->val + pre->val);
        slow = slow->next;
        pre = pre->next;
    }
    return ma;
}