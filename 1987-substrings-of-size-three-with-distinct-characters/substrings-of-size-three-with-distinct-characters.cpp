class Solution {
public:
    int countGoodSubstrings(string str) {
       int k=3;
    
       int j=0,i=0;
       int size=str.length();
       int count=0;
       while(j<size){
        
          if(j-i+1<k){
            j++;
          }else if(j-i+1==k){
            if(str[i]!=str[i+1]&& str[i]!=str[i+2]&& str[i+1]!=str[i+2]){
                count+=1;
             //calculating the count of unique character;
            }
             i++;
             j++;  
          }
         
       } 
       return count;
    }
};