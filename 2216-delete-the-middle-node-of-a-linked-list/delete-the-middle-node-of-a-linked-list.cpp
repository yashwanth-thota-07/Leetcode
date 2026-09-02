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
    ListNode* deleteMiddle(ListNode* head) {
         if(head->next == nullptr){
            return nullptr;
         }
        ListNode* temp = head;
        int c = 0;
        while(temp!=nullptr){
            c++;
            temp = temp->next;
        }
        c = c/2 + 1;
        ListNode* prev = nullptr;
        temp = head;
        ListNode* fut = temp->next;
        int c1 =0;
        while(temp!=nullptr){
            c1++;
            if(c1==c){
                prev->next = fut;
                return head;
            }
            prev = temp;
            temp = temp->next;
            fut = temp->next;
            
        }
        return head;
    }
};