class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int bottledrunk =numBottles;
        int empty = numBottles;
        while(empty>=numExchange){
            empty = empty-numExchange;
            numExchange++;
            bottledrunk++;
            empty++;
        }
        return bottledrunk;
    }
};