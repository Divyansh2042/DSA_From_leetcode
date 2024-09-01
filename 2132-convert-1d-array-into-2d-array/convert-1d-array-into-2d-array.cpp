class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
       vector<vector<int>>ans(m);
       int sz=original.size();
       if(sz!=m*n)return {};
       for(int i=0;i<m;i++){
       ans[i].assign(original.begin()+i*n,original.begin()+(i+1)*n);
       }
       return ans;
    }
};