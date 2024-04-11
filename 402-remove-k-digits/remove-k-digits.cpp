class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans="";
        int mini=0;
        //  "1432219", k = 3 || 1 < 4 remove 4 and size of string > less k then 1 check 3 same thing here
        //then for 2 then same condition but then 1 is less than but second and case fails as size of string
        //become equal to k;
        const uint n=num.size();
        if(n==k){
            num.front()='0';
            num.resize(1);
        }else{
            uint j=0;
            for(const char c:num){
                while(j && c<num[j-1u]&& k){
                    j--;
                    k--;
                }
                num[j++]=c;
            }
        while(k){
            j--;
            k--;
        }
        num.resize(j);
        const uint nz=num.find_first_not_of('0'),
               e=nz==(uint)string::npos?j-1u:nz;
         if(e){
            const auto beg=num.begin();
            num.erase(beg,beg+e);
         }
    }
    return move(num);
    }
};