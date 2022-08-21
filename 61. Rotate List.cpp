ListNode* rotateRight(ListNode* head, int k) {
    int n = 0;
    ListNode* h = head;
    ListNode* tail = head;
    while (h != NULL) {
        if (h->next == NULL)
            tail = h;
        n++;
        h = h->next;
    }
    if (n == 0)
        return head;
    k %= n;
    if (k == 0)
        return head;
    h = head;
    for (int i = 1; i < n - k; i++) {
        h = h->next;
    }
    ListNode* temp = h->next;
    h->next = NULL;
    tail->next = head;
    head = temp;
    return head;
}