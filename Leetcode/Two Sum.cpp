class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp; 
        vector<int> ans(2,0); 
        int a,b; 
        for(int i=0;i<nums.size();i++) mp[nums[i]]++; 
        for(int i=0;i<nums.size();i++)
        {
            a = nums[i]; 
            mp[a]--; 
            b = target - nums[i]; 
            if(mp[b] > 0)
            {
                ans[0] = i; 
                break; 
            }
            mp[a]++;
        }

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == b && i != ans[0]) ans[1] = i;
        }
        return ans;
    }
};
