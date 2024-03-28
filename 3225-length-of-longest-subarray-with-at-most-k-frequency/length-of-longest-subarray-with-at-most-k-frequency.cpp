class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int  i=0,j=0;
        int result=1;
        unordered_map<int,int>mp;
        while(j<n){
            if(mp[nums[j]]==k){
                result=max(result,j-i);
                mp[nums[i]]--;
                i++;
            }else{
                mp[nums[j]]++;
                j++;
            }
        }
         result=max(result,j-i);
         return result;
    }
};