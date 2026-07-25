class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // maximise the profit of the array , buy one day and sell the other day 
       // how to find the order of the given element 
    int running_min = INT_MAX ; 
    int profit = 0 ; 
    int best_profit=0;
        for(int i = 0 ; i < prices.size() ; i++){
            int curr_ele = prices[i]; 
            running_min= min(running_min , curr_ele); 
        
           profit = curr_ele - running_min; 
           best_profit=max(best_profit, profit); 

        }
    
     return best_profit;
    }
};