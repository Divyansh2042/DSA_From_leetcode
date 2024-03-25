class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int size=s1.size();
        bool voil1=false,voil2=false;
        for(int ind=0;ind<size;ind++){
            if(s1[ind]<s2[ind])
                {
                    voil1=true;
                }
            if(s2[ind]<s1[ind]){
                voil2=true;
            }
        }
        if(voil1 and voil2) return false;
        else return true;
    }
};