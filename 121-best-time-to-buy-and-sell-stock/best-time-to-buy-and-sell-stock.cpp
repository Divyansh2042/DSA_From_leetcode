class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int n=prices.size(),profit;
      int maxProfit=0;
      int last=INT_MAX;
      for(int i=0;i<n;i++){
       if(prices[i]<last){
           last=prices[i];
       }
       profit=prices[i]-last;
       maxProfit=max(maxProfit,profit);
      }
      return maxProfit;
    }
};