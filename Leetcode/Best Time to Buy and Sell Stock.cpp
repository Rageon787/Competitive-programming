class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size(); 
        
        vector<int> minPrefix(n,0);
        minPrefix[0] = prices[0]; 
        for(int i=1;i<n;i++) minPrefix[i] = min(minPrefix[i - 1],prices[i]);  
        
        vector<int> maxSuffix(n,0);    
        maxSuffix[n - 1] = prices[n - 1];  
        for(int i=n-2;i>=0;i--) maxSuffix[i] = max(maxSuffix[i + 1],prices[i]); 

        int profit = 0; 
        for(int i=0;i<n - 1;i++) profit = max(profit,maxSuffix[i + 1] - minPrefix[i]); 

        return profit; 
    }
};
