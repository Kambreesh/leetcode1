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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* temp = dummy;
        // ListNode* temp=head;
        while(temp->next!=nullptr){
            if(temp->next->val== val){
                temp->next=temp->next->next;
            }
            else{
                temp=temp->next;
            }
        }
         head = dummy->next;
        delete dummy;
        return head;

    }
};