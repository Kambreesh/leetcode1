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
     ListNode* swapPairs(ListNode* head) {
     if (!head || !head->next) return head;
      ListNode* p1=head;
      ListNode* p2=head->next;
      while(p1 && p2){
        swap(p1->val,p2->val);
        p1=p2->next;
       if(p1) p2=p1->next;
      }
      return head;
    }
};