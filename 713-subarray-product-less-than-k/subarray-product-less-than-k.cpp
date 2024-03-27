class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count=0;
        if(k==0)return 0;
        int r=0,l=0;
        int n=nums.size();
        int product=1;
        while(r<n){
            product*=nums[r++];
            while(l<r && product>=k){
                product/=nums[l++];
            }
            count+=(r-l);
        }
        return count;
    }
};