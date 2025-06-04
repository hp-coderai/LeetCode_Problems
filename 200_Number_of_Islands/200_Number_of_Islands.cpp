class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int ans = 0;
        vector<vector<int>> dirs = {{1,0},{0,1},{-1,0},{0,-1}};

        for (int r = 0;r<rows;r++){
            for(int c = 0;c<cols;c++) {
                if(grid[r][c]=='1'){
                    queue<pair<int,int>>q;
                    q.push({r,c});
                    while(!q.empty()){
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        grid[x][y] = '0';

                        for(auto d:dirs){
                            int dx = x+d[0];
                            int dy = y+d[1];
                            if(dx>=0 && dx<rows && dy>=0 && dy<cols && grid[dx][dy] == '1'){
                                q.push({dx,dy});
                                grid[dx][dy] = '0';
                            }
                        }
                    }
                    ans++;
                }
            }
        }
        return ans;
    }
};
