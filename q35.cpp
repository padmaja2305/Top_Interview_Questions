class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        

        while(head != NULL) {
            head = head->next;
        }
        for(int i = 0; i < k; i++) {
            head = head->next;

        }
        ListNode* temp = head;
        
    }
};