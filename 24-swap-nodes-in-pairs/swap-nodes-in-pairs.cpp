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
        if(head == NULL || head->next==NULL){
            return head;
        }
        ListNode* temp = head;
        vector<int>vec;
        vector<int>vec2;

        while(temp!=NULL){
            vec.push_back(temp->val);
            temp = temp->next;
            if(temp!=NULL){
            vec2.push_back(temp->val);
            temp = temp->next;
            }
        }
        ListNode*start = new ListNode(vec2[0]);
        ListNode* ret = start;
        int n = vec.size();
        int m = vec2.size();
        for(int i=0;i<n;i++){
            start->next = new ListNode(vec[i]);
            start = start->next;
            if(m-1>0){
                start->next = new ListNode(vec2[i+1]);
                start = start->next;
                m--;
            }
        }
        return ret;
    }
};