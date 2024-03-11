class Solution {
public:
    string customSortString(string order, string s) {
        int n,m;
        n=order.size();
        m=s.size();
        string ans="";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(order[i]==s[j]){
                    ans+=s[j];
                    s[j]='*';  
                }
            }
        }
        for(int i=0;i<m;i++){
            if(s[i]!='*'){
                ans+=s[i];
            }
        }
        return ans;
    }
};