class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(500,-1);
        int count = 0;
        int ans = 0;
        for(int i=0;i<s.size();i++){
            int l = last[int(s[i])];
            if(i - count > l) count++;
            else count = i - l;
            ans = max(count,ans);
            last[int(s[i])] = i;
        }
        return ans;
    }
};
