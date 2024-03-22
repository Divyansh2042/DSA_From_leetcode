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
    bool isPalindrome(ListNode* head) {
        vector<int>palin;
        while(head!=NULL){
            palin.push_back(head->val);
            head=head->next;
        }
        int s=0,e=palin.size()-1;
        while(s<=e){
            if(palin[s]!=palin[e]){
                return 0;
            }
            s++;
            e--;
        }
        return 1;
    }
};