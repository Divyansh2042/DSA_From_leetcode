class Solution {
public:
    int findDuplicate(vector<int>& arr) {
      int dupli=0;
      sort(arr.begin(),arr.end());
      for(int i=0;i<arr.size()-1;i++){
          if(arr[i]==arr[i+1]){
             dupli=arr[i];
             break;
          }
      }
      return dupli;
    // int dupli=0;
    // unordered_map<int,int>mp;
    // for(auto it:arr){
    //     mp[it]++;
    // }
    // for(auto i:mp){
    //     if(i.second>1){
    //       dupli=i.first;
    //     }
    // }
    // return dupli;
    }
};