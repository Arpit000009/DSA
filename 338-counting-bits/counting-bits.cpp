class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int>vec;
        for(int i=0;i<=n;i++){
            int j = i;
            int one = 0;
            
            while(j>0){
                if((j%2)==1){
                    one += 1;
                }
                j = j/2;
            }
            vec.push_back(one);
            
        }
        return vec;
    }
};