class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int st = points[0][0];
        int ed = points[0][1];
        int cnt = 1;

        for (int i = 0; i< points.size();i++) {
            if ((points[i][0] >= st && points[i][0] <= ed) || 
                (points[i][1] >= st && points[i][1] <= ed)) {
                
                st = max(st, points[i][0]);
                ed = min(ed,points[i][1]);
            }
            else
            {
                st = points[i][0];
                ed = points[i][1];
                cnt++;
            }
        }
        return cnt;   
    }
};
