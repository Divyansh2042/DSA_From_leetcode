class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        int longestLength=0;
        // for(int i=0,j=0;i+2<n;i=j){
        //    j=i+1;
        //    if(arr[i]<arr[j]){
        //     while(j+1<n && arr[j]<arr[j+1]){
        //         ++j;
        //     }
        //     if(j+1<n&& arr[j]>arr[j+1]){
        //         while(j+1<n&&arr[j]>arr[j+1]){
        //             ++j;
        //         }
        //     longestLength=max(longestLength,j-i+1);
        //     }else{
        //         ++j;
        //     }
        //    }
        // }
        // return longestLength;
        vector<int>up(n,0),down(n,0);
        for(int i=n-2;i>=0;--i)if(arr[i]>arr[i+1])down[i]=down[i+1]+1;
        for(int j=0;j<n;j++){
        if(j>0 && arr[j]>arr[j-1]) up[j]=up[j-1]+1;
        if(down[j]&&up[j])longestLength=max(longestLength,up[j]+down[j]+1);
        }
      return longestLength;
    }
};