class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int>vec;
        for(auto spell:spells){
            long long needed = (success+spell-1)/spell;
            auto it = lower_bound(potions.begin(),potions.end(),needed);
            int count = potions.end()-it;
            vec.push_back(count);
        }
        return vec;
    }
};