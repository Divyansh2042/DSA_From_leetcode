class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        vector<int>ans(n,0);
        stack<array<int,2>>st;
        st.push({temp[n-1],n-1});
        for(int i=n-2;i>=0;i--){
            while(!st.empty() and st.top()[0]<=temp[i]){
                st.pop();
            }
            if(!st.empty()){
            ans[i]=st.top()[1]-i;
            }
            st.push({temp[i],i});
        }
return ans;
    }
};