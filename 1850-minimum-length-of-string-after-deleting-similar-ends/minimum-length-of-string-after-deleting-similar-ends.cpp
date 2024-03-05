class Solution {
public:
    int minimumLength(string s) {
        string pre="",suf="";
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<j && s[i]==s[j]){
           char ch=s[i];
           while(i<=j && s[i]==ch){
               i++;
           }
           while(j>=i && s[j]==ch){
               j--;
           }
        }
        return (j-i+1);
    }
};