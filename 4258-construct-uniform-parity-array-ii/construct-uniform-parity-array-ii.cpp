class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());
        if(nums1[0]%2!=0){
            return true;
        }
        int oddflag = true;
        int evenflag = true;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2!=0){
                evenflag = false;
            }
            if(nums1[i]%2==0){
                oddflag = false;
            }
        }

        return false || oddflag || evenflag;
    }
};