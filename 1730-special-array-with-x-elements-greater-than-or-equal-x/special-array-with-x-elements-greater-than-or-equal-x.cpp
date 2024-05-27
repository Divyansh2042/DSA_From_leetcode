class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        // sort(nums.begin(),nums.end());
        int l=1,r=101,res=-1;
        function<int(int)>safe=[&](int mid){
            int cnt=0;
            for(int  i=0;i<n;i++)cnt+=(nums[i]>=mid);
            return cnt;
        };
        while(l<r){
            int mid=(l+r)/2;
            int cnt=safe(mid);
            if(cnt==mid)return mid;
                // res=mid;
                cout<<mid<<" "<<cnt<<endl;
            if(cnt>mid){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }

        return res;
    }
};