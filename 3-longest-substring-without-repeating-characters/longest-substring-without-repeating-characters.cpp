class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int left=0,right=0,ans=0;
       int n=s.length();
       int maxi=0;
       unordered_map<char,int>mp;
       while(right<n){
         if(mp.count(s[right])==0||mp[s[right]]<left){
            mp[s[right]]=right;
            maxi=max(maxi,right-left+1);
         }else{
            left=mp[s[right]]+1;
            mp[s[right]]=right;
         }
          right++;
       }
       return maxi; 
    }
};