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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*point1 = l1;
        ListNode*point2 = l2;
        int carry = 0;
        ListNode*res = new ListNode(-1);
        ListNode*head = res;

        while(point1!=NULL || point2!=NULL || carry){
            int x;
            int y;
            if(point1!=NULL){
                x = point1->val;
            }
            else{
                x = 0;
            }

             if(point2!=NULL){
                y = point2->val;
            }
            else{
                y = 0;
            }
            int sum = x + y + carry;
            res->next = new ListNode(sum%10);
            res = res->next;
            carry = sum/10;
            if(point1!=NULL)
            point1 = point1->next;
            if(point2!=NULL)
            point2 = point2->next;
        }
        return head->next;
    }
};