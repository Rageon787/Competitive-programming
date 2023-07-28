class Solution {
public:
    bool isValid(string s) {
        stack<char> b;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') b.push(s[i]);
            else
            {
                if(b.size() == 0) return false; 
                if(s[i] == ')' && b.top() == '(') b.pop();
                else if(s[i] == ']' && b.top() == '[') b.pop(); 
                else if(s[i] == '}' && b.top() == '{') b.pop(); 
                else return false; 
            }
        } 
        if(b.size() > 0) return false; 
        return true;        
    }
};
