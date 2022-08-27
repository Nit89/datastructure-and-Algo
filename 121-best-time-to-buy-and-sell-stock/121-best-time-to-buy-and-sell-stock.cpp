class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
    int minimumsofar = prices[0];
     int maxprofit = 0;
        
        for(int i = 1 ; i<prices.size() ; i++)
        {
            if(prices[i]<minimumsofar)
            {
                minimumsofar = prices[i];
               
            }
            else
            {  
                if((prices[i]- minimumsofar) > maxprofit)
                {
                     maxprofit =  prices[i]- minimumsofar;
                }
            }
         }
  
           return maxprofit;
        
        }
    
};