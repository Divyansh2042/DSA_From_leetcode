class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int len=arr.size();
        int fake_len=len+count(arr.begin(),arr.end(),0);
        int i=len-1,j=fake_len-1;
        for(;i>=0;i--){
            if(arr[i]==0){
                if(j<len){
                    arr[j]=0;
                }
                j--;
                if(j<len){
                    arr[j]=0;
                }
            }else{
                if(j<len){
                    arr[j]=arr[i];
                }
            }
            j--;
        }
    }
};