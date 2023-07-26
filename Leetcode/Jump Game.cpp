class Solution {
public:
    bool canJump(vector<int>& nums) {
        int l = 0;
        int r = 0;
        bool flag = true;
        while(r < nums.size() - 1)
        {
            if(nums[r] + r >= nums.size() - 1)
            {
                flag = true;
                break;
            }
            if(r - l == nums[l] || nums[r] >= nums[l])
            {
                l = r;
                if(r + nums[r] >= nums.size() - 1)
                {
                    flag = true;
                    break;
                }
                if(nums[r] == 0)
                {
                    flag = false;
                    break;
                }
            }
            r++;
        }
        if(flag == true) return true;
        else return false;
    }
};
