class Solution {
public:

    unordered_map<int,int>mpp;

    int climb(int i,int n){
        if(i==n){
            return 1;
        }
        if(i>n){
            return 0;
        }

        if(mpp.find(i)!=mpp.end()){
            return mpp[i];
        }

    int a1 = climb(i+1,n);
    int a2 = climb(i+2,n);

    mpp[i] = a1 + a2;

    return a1 + a2;

    }

    int climbStairs(int n) {
        int i =0;
        return climb(0,n);
    }
};