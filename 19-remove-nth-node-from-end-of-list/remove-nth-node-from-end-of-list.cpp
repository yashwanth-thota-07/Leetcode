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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr){
            return nullptr;
        }
        ListNode* temp = head;
        int length = 0;
        while(temp != nullptr){
            length++;
            temp = temp->next;
        }
        int c = length - n + 1;
        if(c == 1){
            return head->next;
        }
        ListNode* prev = nullptr;
        temp = head;
        int c1 = 1;
        while(temp != nullptr){
            if(c1==c){
                prev->next = temp->next;
                return head;
            }
            prev = temp;
            temp = temp->next;
            c1++;
        }
        return head;
    }
};