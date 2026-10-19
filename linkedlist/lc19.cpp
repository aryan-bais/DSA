
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* curr = dummy;

        for (int i = 0; i < n; i++) {
            curr = curr->next;
        }

        while (curr->next != NULL) {
            prev = prev->next;
            curr = curr->next;
        }

        ListNode* temp = prev->next;
        prev->next = temp->next;

        delete temp;

        ListNode* ans = dummy->next;
        delete dummy;

        return ans;
    }
};
