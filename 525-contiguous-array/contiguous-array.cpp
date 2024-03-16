class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int len=nums.size();
        for(int i=0;i<len;i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
        }
        int maxLen=0;
        unordered_map<int,int>preSumMp;
        int preSum=0;
        preSumMp[0]=-1;
         for(int i=0;i<len;i++){
             preSum+=nums[i];
             if(preSumMp.find(preSum-0)!=preSumMp.end()){
                maxLen=max(maxLen,i-preSumMp[preSum-0]);
             }
              if(preSumMp.find(preSum)==preSumMp.end()){
             preSumMp[preSum]=i;
             }
       }
       return maxLen;
    }
};