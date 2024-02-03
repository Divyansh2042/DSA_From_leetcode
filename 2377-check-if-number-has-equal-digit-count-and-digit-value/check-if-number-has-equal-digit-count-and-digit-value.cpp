class Solution {
public:
    bool digitCount(string num) {
       int n=num.length();
       unordered_map<int,int>umap;
       for(auto it:num){
           int x=it-'0';
           umap[x]++;
       }
       for(int i=0;i<n;i++){
           int x=num[i]-'0';
           if(umap[i]!=x){
               return false;
           }
       }
       return true;
    }
};