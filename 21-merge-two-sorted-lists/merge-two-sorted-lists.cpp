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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr && list2 == nullptr) {
            return nullptr;
        }
        if (list1 == nullptr && list2 != nullptr) {
            return list2;
        }
        if (list1 != nullptr && list2 == nullptr) {
            return list1;
        }

        ListNode* head = nullptr;
        ListNode* y = nullptr;

        if (list1->val >= list2->val) {
            head = new ListNode(list2->val);
            y = head;
            list2 = list2->next;
        } else {
            head = new ListNode(list1->val);
            y = head;
            list1 = list1->next;
        }
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        while (temp1 != nullptr && temp2 != nullptr) {
            if (temp1->val >= temp2->val) {
                head->next = new ListNode(temp2->val);
                temp2 = temp2->next;
                head = head->next;
            } else {
                head->next = new ListNode(temp1->val);
                temp1 = temp1->next;
                head = head->next;
            }
        }
        if (temp1 == nullptr) {
            while (temp2 != nullptr) {
                head->next = new ListNode(temp2->val);
                temp2 = temp2->next;
                head = head->next;
            }
        } else {
            while (temp1 != nullptr) {
                head->next = new ListNode(temp1->val);
                temp1 = temp1->next;
                head = head->next;
            }
        }
        return y;
    }
};