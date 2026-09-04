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
    ListNode* oddEvenList(ListNode* head) {

         if (head == nullptr)
            return nullptr;
        ListNode* temp = head;
        int count = 2;
        ListNode* head1 = new ListNode(head->val);
        ListNode* x = head1;
        temp = head->next;
        while(temp!=nullptr){
            if(count%2!=0){
                head1->next = new ListNode(temp->val);
                head1 = head1->next;
            }
            temp = temp->next;
            count++;
        }
        count = 2;
        temp = head->next;
           while(temp!=nullptr){
            if(count%2==0){
                head1->next = new ListNode(temp->val);
                head1 = head1->next;
            }
            temp = temp->next;
            count++;
        }
        return x;
    }
};