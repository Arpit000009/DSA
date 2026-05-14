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
    ListNode* removeNodes(ListNode* head) {
        stack<int>st;
        ListNode* temp = head;
        while(temp!=NULL){
            while(!st.empty() && st.top()<temp->val){
                st.pop();
            }
            st.push(temp->val);
            temp = temp->next;
        }
        vector<int>vec;
        while(!st.empty()){
            vec.push_back(st.top());
            st.pop();
        }
        int n = vec.size();
        ListNode * ans = new ListNode(vec[n-1]);
        ListNode*one = ans;
        for(int i=n-2;i>=0;i--){
            one->next = new ListNode(vec[i]);
            one = one->next;
        }
        return ans;
    }
};