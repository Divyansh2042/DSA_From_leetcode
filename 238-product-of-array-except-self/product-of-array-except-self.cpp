class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
//      int n=nums.size();
//       vector<int>pre(n);
//       vector<int>suf(n);
//     //   for(int i=1;i<n;i++){
//     //       pre[i]=pre[i-1]*nums[i-1];
//     //   }
//     //   int post=nums[n-1];
//     //   vector<int>&res=pre;
//     //   for(int i=n-2;i>=0;i--){
//     //       res[i]=pre[i]*post;
//     //       post*=nums[i];
//     //   }
//     //   return res;
//     pre[0]=1;
//     for(int i=1;i<n;i++){
//     pre[i]=pre[i-1]*nums[i-1];
//     }
//     suf[n-1]=1;
//     for(int i=n-2;i>=0;i--){
//     suf[i]=suf[i+1]*nums[i+1];
//     }
//   vector<int>res(n);
//     for(int i=0;i<n;i++){
//         res[i]=pre[i]*suf[i];
//     }
//     return res;
    int n=nums.size();
    vector<int>res(n,1);
    int pre=1;
    for(int i=0;i<n;i++){
        res[i]=pre;
        pre=pre*nums[i];
    }
    int post=1;
    for(int i=n-1;i>=0;i--){
        res[i]=res[i]*post;
        post*=nums[i];
    }
    return res;
    }

};