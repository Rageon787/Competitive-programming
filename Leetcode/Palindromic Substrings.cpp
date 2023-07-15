class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size(); 
        int dp[n + 1][n + 1]; 
        int ans = 0; 
        for(int i=1;i<=n;i++)
        {
           for(int j=0;j<n;j++)
           {
               int l = j; 
               int r = j + i - 1; 
               if(r >= n) continue;
               if(i == 1) dp[l][r] = 1; 
               else if(i == 2)
               {
                   if(s[l] == s[r]) dp[l][r] = 1; 
                   else dp[l][r] = 0; 
               }
               else 
               {
                   if(s[l] != s[r]) dp[l][r] = 0; 
                   else dp[l][r] = dp[l + 1][r - 1]; 
               }
               ans += dp[l][r]; 
           }
        }

        return ans; 
    }
};

