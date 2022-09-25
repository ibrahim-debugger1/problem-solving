ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
	int a = 0;
	ListNode* temp_A = headA;
	ListNode* temp_B = headB;
	while (a != 2) {
		if (temp_A == NULL) {
			a++;
			temp_A = headB;
		}
		if (temp_B == NULL) {
			a++;
			temp_B = headA;
		}
		if (temp_A == temp_B)
			return temp_A;
		temp_A = temp_A->next;
		temp_B = temp_B->next;
	}
	while (temp_A != NULL && temp_B != NULL) {
		if (temp_A == temp_B)
			return temp_A;
		temp_A = temp_A->next;
		temp_B = temp_B->next;
	}
	return NULL;
}