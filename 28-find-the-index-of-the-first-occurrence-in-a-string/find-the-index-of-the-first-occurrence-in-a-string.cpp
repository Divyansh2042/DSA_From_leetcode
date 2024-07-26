class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0,k;
        bool b=true;
        while(i<haystack.size()){    //i less than haystack size
            if(haystack[i]==needle[j]){//if  ch is equal then k=i and b=true
                k=i;
                b=true;
                while(j<needle.size()){//check for j size
                    if(haystack[i]!=needle[j]){//if ch is not equal
                        j=0;
                        b=false;
                        break;
                    }
                    i++;
                    j++;
                }
                
                if(b){
                    return k;
                }else{
                    i=k;
                    j=0;
                }
            }
            i++;
        }
        return -1;
    }
};