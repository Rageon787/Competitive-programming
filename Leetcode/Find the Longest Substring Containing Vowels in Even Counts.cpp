class Solution {
public:
    int findTheLongestSubstring(string s) {
        map<char,int> vtoi; 
        vtoi['a'] = 1;
        vtoi['e'] = 2;
        vtoi['i'] = 3;
        vtoi['o'] = 4;
        vtoi['u'] = 5;
        vector<int> dp(1 << 6, -1);  
        int n = s.size(); 
        dp[0] = -1; 
        int m = 0; 
        int ans = 0; 
        for(int i=0;i<n;i++)
        {
            m ^= (1 << vtoi[s[i]] >> 1);  
            if(m != 0 && dp[m] == -1) dp[m] = i; 
            ans = max(ans,i - dp[m]); 
        }

        return ans; 
    }
};
