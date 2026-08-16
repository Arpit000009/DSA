class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        for(int i=0;i<rocks.size();i++){
            capacity[i] = capacity[i] - rocks[i];
        }

        sort(capacity.begin(),capacity.end());
        int count = 0;
        for(int i=0;i<rocks.size();i++){
            
            if(capacity[i]>0 && additionalRocks>=capacity[i]){
               additionalRocks =  additionalRocks - capacity[i];
                capacity[i] = 0;
            }

            if(capacity[i]==0){
                count++;
            }
        }
        return count;
    }
};