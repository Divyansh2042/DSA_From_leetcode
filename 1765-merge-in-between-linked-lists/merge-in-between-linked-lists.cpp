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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *cur=list1;
        for(int i=1;i<a;i++){
            cur=cur->next;
        }
        ListNode *tmp;
        for(int i=a;i<=b;i++){
            tmp=cur->next;
            cur->next=cur->next->next;
            delete tmp;
        }
        tmp=cur->next;
        cur->next=list2;
        while(list2->next!=nullptr){
            list2=list2->next;
        }
        list2->next=tmp;
        return list1;
    }
};