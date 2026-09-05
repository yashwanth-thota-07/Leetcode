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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp = head;
        int flag = 0;
        ListNode* y = nullptr;
        ListNode* head1 = nullptr;
        while (temp != nullptr) {
            if (temp->val < x) {
                if (flag == 0) {
                    head1 = new ListNode(temp->val);
                    y = head1;
                    flag++;
                } else {
                    head1->next = new ListNode(temp->val);
                    head1 = head1->next;
                }
            }
            temp = temp->next;
        }
        temp = head;
        while (temp != nullptr) {
            if (temp->val >= x) {
                if(flag==0){
                     head1 = new ListNode(temp->val);
                    y = head1;
                    flag++;
                }
                else{
                head1->next = new ListNode(temp->val);
                head1 = head1->next;}
            }
            temp = temp->next;
        }
        return y;
    }
};