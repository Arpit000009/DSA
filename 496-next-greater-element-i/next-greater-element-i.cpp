class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        map<int,int>mpp;

        for(int i=0;i<nums2.size();i++){

            while(!st.empty() && st.top()<nums2[i]){
                mpp[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }

        while(!st.empty()){
            mpp[st.top()] = -1;
            st.pop();
        }

        vector<int>vec;
        for(int i=0;i<nums1.size();i++){
            vec.push_back(mpp[nums1[i]]);
        }

        return vec;
    }
};