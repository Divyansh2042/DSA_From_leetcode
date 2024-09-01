class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
       vector<vector<int>>ans(m,vector<int>(n));
       int sz=original.size();
       if(sz!=m*n)return {};
       for(int i=0;i<m*n;i++){
        ans[i/n][i%n]=original[i];
       }
       return ans;
    }
};