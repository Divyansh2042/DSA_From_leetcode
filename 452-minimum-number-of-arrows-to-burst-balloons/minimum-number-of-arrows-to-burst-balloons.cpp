class Solution {
public:
   
    int findMinArrowShots(vector<vector<int>>& points) {
        int m=points.size();
        sort(points.begin(),points.end(),[](const auto& a,const auto& b){
        return a[0]<b[0];
    });
        int end=points[0][1];
        int arrow=1;
        for(int i=1;i<m;i++){
            if(points[i][0]>end){
                arrow++;
                end=points[i][1];
            }else{
                end=min(end,points[i][1]);
            }
        }
        return arrow;
    }
};