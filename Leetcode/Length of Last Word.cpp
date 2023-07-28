class Solution {
public:
    int lengthOfLastWord(string s) {
        string ans = "";
        int n = 0; 
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == ' ')
            {
                if(ans.size() > 0) n = ans.size();
                ans = "";
            }
            else ans += s[i]; 
        } 
        if(ans.size() > 0) n = ans.size(); 
        return n;  
    }
};
