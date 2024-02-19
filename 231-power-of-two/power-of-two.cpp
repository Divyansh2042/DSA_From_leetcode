class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<31;i++){
            if(n==0){
                return false;
            }
            if(pow(2,i)==n){
                return true;
            }
        }
        return false;
    }
};