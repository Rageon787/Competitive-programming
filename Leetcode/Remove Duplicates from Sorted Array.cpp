class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++) s.insert(nums[i]);
        int k = s.size();
        int j = 0; 
        for(auto i : s) 
        {
            nums[j] = i;
            j++;
        }
        return k; 
    }
};
