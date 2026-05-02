class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int point = -1;
        int flag = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0 && flag==0){
                point = i;
                flag = 1;
            }
            nums[i] = nums[i]*nums[i];
            
        }

        if(point==-1){
            reverse(nums.begin(),nums.end());
            return nums;
        }

        int i;
        if(point>0){
            i = point-1;
        }
        int j = point;
        vector<int>vec;
        while(i>=0 && j<nums.size()){
            if(nums[i]<nums[j]){
                vec.push_back(nums[i]);
                i--;
            }
            else{
                vec.push_back(nums[j]);
                j++;
            }
        }

        while(i>=0){
            vec.push_back(nums[i]);
            i--;
        }

        while(j<nums.size()){
            vec.push_back(nums[j]);
            j++;
        }

        return vec;
    }
};