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
    void reorderList(ListNode* head) {
        ListNode* slow=head,*fast=head;
        while(fast!=nullptr &&fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* curr=slow->next,*prev=nullptr,*next=nullptr;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        slow->next=nullptr;
        ListNode* A=head,*B=prev;
        while(A &&B){
            ListNode* A_next=A->next;
            ListNode* B_next=B->next;
            A->next=B;
            B->next=A_next;
            A=A_next;
            B=B_next;
        }
    }
};