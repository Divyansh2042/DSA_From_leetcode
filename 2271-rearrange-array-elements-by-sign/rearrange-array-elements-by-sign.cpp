class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        for(int i=0,j=0,k=0; i<n; i++){
            if(i%2==0){
                while(nums[j]<0){ j++; }
                ans[i]=nums[j++];
            }else{
                while(nums[k]>0){ k++; }
                ans[i]=nums[k++];
            }
        }
        return ans;
    }
};