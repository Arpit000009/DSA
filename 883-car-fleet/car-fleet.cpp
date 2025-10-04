class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,int>> cars(n);

        // Pair position with speed
        for(int i=0; i<n; i++){
            cars[i] = {position[i], speed[i]};
        }

        // Sort cars by starting position descending (closer to target first)
        sort(cars.rbegin(), cars.rend());

        int fleets = 0;
        double last_time = 0.0;

        // Check from closest to farthest car
        for(auto &car : cars){
            double time = (double)(target - car.first) / car.second;
            if(time > last_time){
                fleets++;
                last_time = time;  // update slowest fleet time
            }
        }

        return fleets;
    }
};