class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size()-1;
        int start=0,end=n;
        int ans=n;
        if(target>nums[n]){
            return n+1;
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]>=target){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};