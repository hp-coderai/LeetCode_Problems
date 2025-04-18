class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int Tot = n;
        int i = 1;

        while(i<n) {
            if(ratings[i] == ratings[i-1]) {
                i++;
                continue;
            }
            int CurMax = 0;
            while(i<n && ratings[i] > ratings[i-1]) {
                CurMax++;
                Tot += CurMax;
                i++;
            }
            if (i==n) {
                return Tot;
            }
            int CurMin = 0;
            while(i<n && ratings[i]<ratings[i-1]) {
                CurMin++;
                Tot += CurMin;
                i++;
            }
            Tot -= min(CurMax, CurMin);
        }
        return Tot;
        
    }
};
