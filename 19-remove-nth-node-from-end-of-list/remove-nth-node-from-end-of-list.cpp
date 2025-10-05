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
       
        ListNode* start = head;
        int count = 0;
        while(start!=NULL){
            start = start->next;
            count++;
        }
        if(n==count){
            return head->next;
        }
        ListNode*prev = NULL;
        ListNode*curr = head;
        ListNode*next = curr->next;
        count = count-n;
        while(count){
            prev = curr;
            curr = next;
            next = next->next;
            count--;
        }
        prev->next = next;
        curr->next = NULL;
        return head;
    }
};