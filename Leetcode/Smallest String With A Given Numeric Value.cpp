class Solution {
public:
    string getSmallestString(int n, int k) {
        vector<int> v;
    while(k >= 26)
    {
        for(int i=26;i>=1;i--)
        {
            if(k - i < n - 1) continue;
            k -= i;
            n--;
            v.push_back(i);
            break;
        }
    }
    if(n != 0)
    {
         v.push_back(k - n + 1);
         n--;
         for(int i=0;i<n;i++) v.push_back(1);
         reverse(v.begin(),v.end());
    }
    string ans = "";
    for(int i=0;i<v.size();i++) ans += (char)(97 + v[i] - 1);
        return ans;
    }
};
