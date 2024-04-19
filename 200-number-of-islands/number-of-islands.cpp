class Solution {

public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()|| grid[0].empty())
        {
            return 0;
        }
        int m=grid.size(),n=grid[0].size();
        int numIsland=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               if(grid[i][j]=='1'){
                 numIsland++;
                 dfs(grid,i,j);
               }
            }
        }
        return numIsland;
    }
private:
    void dfs(vector<vector<char>>&grid,int r,int c){
         int m=grid.size(),n=grid[0].size();
         if(r<0 || r>=m || c<0 ||c>=n|| grid[r][c]!='1'){
            return ;
         }
         grid[r][c]='0';
         dfs(grid,r+1,c);
         dfs(grid,r-1,c);
         dfs(grid,r,c+1);
         dfs(grid,r,c-1);
    }
};