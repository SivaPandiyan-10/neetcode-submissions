class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
       int minV=INT_MAX;
       int maxV=0;
       for(int price:prices)
       {
           minV=min(minV,price);
           int profit=price-minV;
           maxV=max(profit,maxV);
       }     
       return maxV;   
    }
};
