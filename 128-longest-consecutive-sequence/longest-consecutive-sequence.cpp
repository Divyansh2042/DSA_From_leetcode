class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        unordered_set<int>s;
        for(auto x:nums){
            s.insert(x);
        }
        int longest=1;
        int cnt=0;
        for(auto &it:s){
          if(!s.count(it-1)){
              cnt=1;
              while(s.count(it+cnt)){
                  cnt+=1;
              }
            longest=max(longest,cnt);
          }
        }
        return longest;
    }
};