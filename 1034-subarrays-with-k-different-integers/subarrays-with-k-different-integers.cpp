class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int subWithMaxK=subarraysWithAtmostK(nums,k);
        int subWithreducedK=subarraysWithAtmostK(nums,k-1);
        return (subWithMaxK-subWithreducedK);
    }
    int subarraysWithAtmostK(vector<int>& nums,int k){
        int left=0,right=0,ans=0;
        unordered_map<int,int>mp;
        while(right<nums.size()){
            mp[nums[right]]++;
            while(mp.size()>k){
                mp[nums[left]]--;
                if(mp[nums[left]]==0)mp.erase(nums[left]);
                left++;
            }
            ans+=right-left+1;
            right++;
        }
        return ans;
    }
};