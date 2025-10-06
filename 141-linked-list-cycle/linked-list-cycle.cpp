/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return false;
        }
        ListNode*start = head;
        ListNode*run = head;
        while(run!=NULL && run->next!=NULL){
            if(run->next!=NULL){
            start = start->next;
            run = run->next->next;
            if(start==run){
                return true;
            }
            }
        }
        return false;
    }
};