class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sell=0;
        for(int i=0;i<prices.size();i++)
        {
            int buy=prices[i];
            for(int j=i;j<prices.size();j++)
            {
                if(prices[j]>buy)
                {
                    int maxSell=prices[j]-buy;
                    if(maxSell > sell)
                    {
                        sell=maxSell;
                    }
                }
            }
        }
        return sell;
    }
};
