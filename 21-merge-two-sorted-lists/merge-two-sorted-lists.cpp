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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* res = new ListNode(-1);
        ListNode*ret = res;

        ListNode* one = list1;
        ListNode* two  = list2;
        

        while(one!=NULL && two!=NULL){
            if(one->val<two->val){
                res->next = one;
                one = one->next;
                res = res->next;
            }
            else{
                res->next = two;
                two = two->next;
                res = res->next;
            }
        }
        if(one!=NULL)
        res->next = one;
        else
        res->next = two;

        return ret->next;
    }
};