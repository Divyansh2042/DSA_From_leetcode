class Solution {
public:
    int findsum(int i,int j,vector<int>&nums){
        if(i>j)return 0;
        if(i==j)return nums[i];
        int take =nums[i]+min(findsum(i+2,j,nums),findsum(i+1,j-1,nums));
        int nottake =nums[j]+min(findsum(i,j-2,nums),findsum(i+1,j-1,nums));
        return max(take,nottake);
    }
    bool predictTheWinner(vector<int>& nums) {
       int totalscore=0;
       for(int i:nums){
        totalscore=totalscore+i;
       }
       int firstPlayerSum=findsum(0,nums.size()-1,nums);
       int secondPlayerSum=totalscore-firstPlayerSum;
       return firstPlayerSum>=secondPlayerSum;
    }
};