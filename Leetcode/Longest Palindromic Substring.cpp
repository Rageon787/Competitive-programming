class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int dp[n + 1][n + 1];
        int ans = 1;
        int idx = 0;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i == j) dp[i][j] = 1;
                else if(j - i == 1 && s[i] == s[j]) dp[i][j] = 2; 
                else dp[i][j] = 0;
            }
        }
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<n;j++){
                if(s[i] == s[j]){
                    if(j - i <= 1) continue;
                    if(dp[i + 1][j - 1] > 0) dp[i][j] = dp[i + 1][j - 1] + 2;
                }
                else dp[i][j] = 0;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(dp[i][j] > ans){
                    ans = dp[i][j];
                    idx = i;
                }
            }
        }
        return s.substr(idx,ans);
    }
};
