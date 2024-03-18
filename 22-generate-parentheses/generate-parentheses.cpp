class Solution {
public:
    void generate(vector<string>&ans,int ob,int cb,int n,string s)
    {
         if(ob==n&&cb==n){
            ans.push_back(s);
         }
         if(ob<n){
            generate(ans,ob+1,cb,n,s+"(");
         }
         if(cb<ob){
            generate(ans,ob,cb+1,n,s+")");
         }
    }
    vector<string> generateParenthesis(int n) {
        //3 steps to check 
        //1- opening bracket must be less than n
        //2-closing bracket must be less than opening bracket
        //3- if opening bracket and closing bracket is equal than it is inserted in ans
        vector<string>ans;
        string s;
        int ob=0,cb=0;
        generate(ans,ob,cb,n,s);
        return ans;
    }
};