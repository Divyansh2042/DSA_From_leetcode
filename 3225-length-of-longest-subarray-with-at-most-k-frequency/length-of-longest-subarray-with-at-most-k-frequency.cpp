class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans=0;
        int n=nums.size();
        unordered_map<int,int>umap;
        for(int l=0,r=0;r<n;r++){
           umap[nums[r]]++;
           if(umap[nums[r]]>k){
            while(nums[l]!=nums[r]){
                umap[nums[l]]--;
                l++;
            }
            umap[nums[l]]--;
            l++;
           }
           ans=max(ans,r-l+1);
        }
return ans;
    }
};