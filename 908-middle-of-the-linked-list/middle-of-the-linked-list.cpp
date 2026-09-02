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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        ListNode* temp1 = head;
        int c = 0;
        while(temp != nullptr){
            c++;
            temp = temp->next;
        }
        c = c/2 + 1;
        int c1 = 0;
        while(temp1 != nullptr){
            c1++;
            if(c1==c){
                return temp1;
                break;
            }
            temp1 = temp1->next;
        }

      return temp1;
        
    }
};