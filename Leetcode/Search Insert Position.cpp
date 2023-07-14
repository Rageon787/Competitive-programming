class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int ans = nums.size(); 
        while(l <= r)
        {
            int mid = (l + r) / 2;
            if(target < nums[mid])
            {
                r = mid - 1;
                ans = mid; 
                continue;
            }
            if(target > nums[mid])
            {
                l = mid + 1;
                continue;
            }
            if(target == nums[mid]) 
            {
                ans = mid;
                break;
            }
        }
        return ans;
    }
};
