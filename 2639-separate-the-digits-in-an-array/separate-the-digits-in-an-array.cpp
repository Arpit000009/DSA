class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            list<int>l;
            while(num!=0){
                l.push_back(num%10);
                num = num/10;
            }
            l.reverse();
            for(int x:l){
                ans.push_back(x);
            }
        }
        return ans;
    }
};