/**
Given the head of a singly linked list, reverse the list, and return the reversed list.
*/
ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        
        ListNode* node = reverseList(head->next);
        
        head->next->next = head;
        
        head->next = NULL;
        return node;
    }