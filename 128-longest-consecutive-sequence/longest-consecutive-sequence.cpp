class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        if(nums.size()==0)return 0;
        for(auto x:nums){
            st.insert(x);
        }
        int longest=0;
        for(auto &it:st){
            if(st.find(it-1)==st.end()){
                int cnt=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                     cnt++;
                    x++;
                }
             longest=max(longest,cnt);
            }
        }
        return longest;
    }
};