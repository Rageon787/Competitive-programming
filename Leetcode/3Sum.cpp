class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++)
    {
        int l = i + 1;
        int r = nums.size() - 1;
        if(i > 0 && nums[i] == nums[i - 1]) continue;
        while(l < r)
        {
            int threeSum = nums[l] + nums[r] + nums[i];
            if(threeSum == 0)
            {
                vector<int> v;
                v.push_back(nums[l]);
                v.push_back(nums[r]);
                v.push_back(nums[i]);
                sort(v.begin(),v.end());
                ans.push_back(v);
                l++;
                r--;
                while(l < r && nums[l] == nums[l - 1]) l++;
                while(l < r && nums[r] == nums[r + 1]) r--;
            }
            else if(threeSum > 0) r--;
            else l++;
        }
    }
    return ans;
}
};
