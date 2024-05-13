class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            if(!grid[i][0])
            {
                for(int j=0;j<n;j++)
                {
                    grid[i][j]=!grid[i][j];
                }
            }
        }
        int count=0;
        int ans=0,temp=0;
        for(int j=1;j<n;j++)
        {
            count=0;
            for(int i=0;i<m;i++)
            {
                if(grid[i][j])
                {
                    count++;
                }
            }
            if(count<=m/2)
            {
                for(int i=0;i<m;i++)
                {
                    grid[i][j]=!grid[i][j];
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            temp=0;
            for(int j=0;j<n;j++)
            {
                temp=temp*2 + grid[i][j];
            }
            ans+=temp;
        }
        return ans;
    }
};