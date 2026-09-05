class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while (temp != nullptr) {
            if (temp->val == val && temp == head) {
                head = temp->next;
                temp = temp->next;
            }
            else if (temp->val == val) {
                prev->next = temp->next;
                temp = temp->next;
            }
            else {
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};