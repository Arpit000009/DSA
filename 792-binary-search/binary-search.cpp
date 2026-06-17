class Solution {
public:

    int BinarySearch(vector<int>vec,int target,int start,int end){
        if(start>end){
            return -1;
        }
        int mid = (start+end)/2;
        if(vec[mid]==target){
            return mid;
        }

        if(vec[mid]>target){
            return BinarySearch(vec,target,start,mid-1);
        }
        else{
           return BinarySearch(vec,target,mid+1,end);
        }
        return -1;
        
    }

    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        return BinarySearch(nums,target,start,end);
    }
};