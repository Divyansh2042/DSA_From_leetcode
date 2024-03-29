class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int mx=*max_element(nums.begin(),nums.end());
        long long ans=0;
        int l=0,r=0,n=nums.size();
        while(r<n){
            k-=(nums[r++]==mx);
            while(k==0){
                k+=(nums[l++]==mx);
            }
            ans+=l;
        }
        return ans;
    }
};