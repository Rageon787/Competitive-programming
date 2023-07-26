class Solution {
public:
    int minFlips(string s) {
        int n = s.size(); 
        s += s; 
        string s0 = ""; 
        string s1 = ""; 
        int c0 = 0; 
        int c1 = 0; 
        int ans = INT_MAX; 
        for(int i=0;i<2*n;i++) 
        {
            s0 += to_string(i % 2); 
            s1 += to_string((i + 1) % 2); 
        }

        cout << s0 << " " << s1 << endl; 
        for(int i=0;i<n;i++)
        {
            if(s[i] != s0[i]) c0++; 
            if(s[i] != s1[i]) c1++;   
        }

        ans = min(ans,min(c1,c0)); 

        for(int i=1;i<n;i++)
        {
            if(s[i - 1] != s0[i - 1]) c0--; 
            if(s[i - 1] != s1[i - 1]) c1--; 

            if(s[i + n - 1] != s0[i + n - 1]) c0++; 
            if(s[i + n - 1] != s1[i + n - 1]) c1++; 

            ans = min(min(c1,c0),ans);  
        }

        return ans; 

    }
};
