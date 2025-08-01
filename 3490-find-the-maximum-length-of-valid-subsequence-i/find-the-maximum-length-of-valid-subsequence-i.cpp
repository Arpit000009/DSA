class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n = nums.size();
        int odd_count = nums[0]%2==1;
        int even_count = nums[0]%2==0;
        int alt_count = 1;
        int even;
        if(nums[0]%2==0){
            even = false;
        }
        else{
            even = true;
        }

        for(int i=1;i<n;i++){
            if((nums[i]%2==0 && even==true)||(nums[i]%2==1 && even==false)){
                alt_count+=1;
                even = !even;
            }
            if(nums[i]%2==0){
                even_count += 1;
            }
            else{
                odd_count+=1;
            }
        }
        return max({even_count,alt_count,odd_count});
    }
};