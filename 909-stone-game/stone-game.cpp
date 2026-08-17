class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int i = 0;
        int j = piles.size()-1;
        int bobsum = 0;
        int alicesum = 0;
        while(i<=j){
            if(piles[i]>piles[j]){
                alicesum = alicesum + piles[i];
                i++;
            }
            else{
                alicesum = alicesum + piles[j];
                j--;
            }
            if(i<=j){
                if(piles[i]>piles[j]){
                alicesum = alicesum + piles[i];
                i++;
            }
            else{
                alicesum = alicesum + piles[j];
                j--;
            }
            }
        }
        return alicesum>bobsum;
    }
};