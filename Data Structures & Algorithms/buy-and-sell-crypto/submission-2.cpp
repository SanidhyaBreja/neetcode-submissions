class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int result=0;
        for(int i=0;i<=prices.size()-1;i++)
        {
            for(int j=i+1;j<=prices.size()-1;j++)
            {
                if(prices[i]<prices[j])
                {
                    result=max(result,prices[j]-prices[i]);
                }

            }
        }
        return result;
    }
};
