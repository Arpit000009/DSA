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
    ListNode* sortList(ListNode* head) {
        ListNode* start = head;
        vector<int>vec;
        while(start!=NULL){
            vec.push_back(start->val);
            start = start->next;
        }
        sort(vec.begin(),vec.end());

        ListNode*res = new ListNode(-1);
        ListNode*ret = res;
        for(int i=0;i<vec.size();i++){
            res->next = new ListNode(vec[i]);
            res = res->next;
        }
        return ret->next;
    }
};