class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0,right=n-1;
        int mid=0;
        while(left<=right){
          mid=left+(right-left)/2;
          if(nums[mid]<target){
              left++;
          }else if(nums[mid]>target){
              right--;
          }
          else{
              return mid;
          }
        }
        return -1;
    }
};