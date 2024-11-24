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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* tail=nullptr;
        int size=0;
        if(head==NULL ) return head;
        while(temp!=NULL){
            size++;
            if(temp->next==NULL) tail=temp;
            tail=temp;
            temp=temp->next;
        }

        k=k%size;
        if(k==0) return head;
        temp=head;
        for(int i=0;i<size-k-1;i++){
            temp=temp->next;
        }
        tail->next=head;
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};