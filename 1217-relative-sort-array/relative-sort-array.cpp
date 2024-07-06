class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        vector<int>ans;
        int count=0;
        for(auto it : arr1){
            mp[it]++;
        }
        for(auto it:arr2){
            if(mp.find(it)!=mp.end()){
                auto x=mp.find(it);
                int count=x->second;
                vector<int>v(count,it);
                ans.insert(ans.end(),v.begin(),v.end());
                mp.erase(it);
            }
        }
        for(auto x:mp){
            int ele=x.first;
            int count=x.second;
            vector<int>v(count,ele);
            ans.insert(ans.end(),v.begin(),v.end());
        }
        return ans;
    }
};