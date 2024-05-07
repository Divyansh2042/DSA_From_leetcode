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
    ListNode* reverse(ListNode* Node){
        ListNode* curr=Node,*prev=NULL,*Next=NULL;
        while(curr){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        ListNode* reverseList=reverse(head);
        int carry=0;
        ListNode* current=reverseList;
        ListNode* previousList=NULL;
        while(current){
            int newvalue=current->val*2+carry;
            current->val=newvalue%10;
            if(newvalue>9){
                carry=1;
            }else{
                carry=0;
            }
            previousList=current;
            current=current->next;
        }
    if(carry!=0){
        ListNode* extraNode =new ListNode(carry);
        previousList->next=extraNode;
    }
    ListNode* result=reverse(reverseList);
    return result;
    }
};