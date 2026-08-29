class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();

        sort(points.begin(),points.end());

        vector<int>prev = points[0];
        int count = 1;
        for(int i=0;i<n;i++){
            int currentStartPoint = points[i][0];
            int correntEndPoint = points[i][1];

            int prevStartPoint = prev[0];
            int prevEndPoint = prev[1];
            if(currentStartPoint>prevEndPoint){
                count++;
                prev = points[i];
            }
            else{
                prev[0] = max(currentStartPoint,prevStartPoint);
                prev[1] = min(prevEndPoint,correntEndPoint);

            }
        }

        return count;
    }
};