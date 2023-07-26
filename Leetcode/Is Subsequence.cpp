class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.empty()) return true;
        stack <int> s1,s2;
        for(int i=0;i<s.size();i++) s1.push(s[i]);
        for(int i=0;i<t.size();i++) s2.push(t[i]);
        bool flag = false;
        while(!s2.empty())
        {
            if(s1.top() == s2.top()) 
            {
                s1.pop();
                s2.pop();
                if(s1.empty())
                {
                    flag = true;
                    break;
                }
            }
            else s2.pop();
        }
    return flag;
    }
};
