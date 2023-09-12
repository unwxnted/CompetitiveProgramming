ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }
        vector<int> v;
        while (head) {
            v.push_back(head->val);
            head = head->next;
        }

        ListNode* newHead = new ListNode(v.back());
        ListNode* current = newHead;

        for (int i = v.size() - 2; i >= 0; --i) {
            current->next = new ListNode(v[i]);
            current = current->next;
        }

        return newHead;
    }