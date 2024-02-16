class Solution {
public:
    void helper(vector<string>&v,int ob,int cb,int n,string s){
       if(ob==n && cb==n){
           v.push_back(s);
           return;
       }
       if(ob<n){
           helper(v,ob+1,cb,n,s+"(");
       }
       if(cb<ob){
           helper(v,ob,cb+1,n,s+")");
       }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>s;
        helper(s,0,0,n,"");
        return s;
    }
};