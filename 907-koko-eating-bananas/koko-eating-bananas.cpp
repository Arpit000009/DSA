class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = 0;
        int ans =0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]>max){
                max = piles[i];
            }
        }
        int low = 1;
        int high = max;
        while(low<=high){
            int mid = (low+high)/2;
            long long val = 0;
           for(int j=0;j<piles.size();j++){
            val = val + ceil(piles[j] /double(mid));
           }
           if(val<=h){
            high = mid - 1;
           }
           else{
            low = mid+1;
           }
        }
        return low;
    }
};