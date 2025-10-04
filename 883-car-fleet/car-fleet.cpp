class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,int>>vec(n);
        for(int i=0;i<n;i++){
            vec[i] = {position[i],speed[i]};
        }

        sort(vec.rbegin(),vec.rend());

        vector<double>time(n);

        for(int i=0;i<n;i++){
            time[i] = (double)(target-vec[i].first)/vec[i].second;
        }

        int fleets = 0;
        double last_times = 0.0;

        for(double t:time){
           
            if(t>last_times){
                fleets++;
                last_times = t;
            }
        }
        return fleets;
    }
};