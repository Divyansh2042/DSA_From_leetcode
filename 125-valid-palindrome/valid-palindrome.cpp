class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>v;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a'&& s[i]<='z'){
                v.push_back(s[i]);
            }else if(s[i]>='A' && s[i]<='Z'){
                v.push_back(s[i]-'A'+'a');
            }else if(s[i]>='0'&& s[i]<='9'){
                v.push_back(s[i]);
            }
        }
        int n=v.size();
        for(int i=0;i<n/2;i++){
            if(v[i]!=v[n-i-1]){
                return false;
            }
        }
        return true;
    }
};