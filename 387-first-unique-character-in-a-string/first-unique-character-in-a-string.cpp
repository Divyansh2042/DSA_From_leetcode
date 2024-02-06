class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        // for(int i=0;i<s.length();i++){
        //     if(mp[s[i]]==1)return i;
        // }
        // int c=0;
        // for(auto i:s){
        //     if(mp[i]==1){
        //         return c;
        //     }
        //    c++;
        // }
        for(int i=0;i<s.length();i++){
            if(mp[s[i]]==1)return i;
        }
        return -1;
    }
};