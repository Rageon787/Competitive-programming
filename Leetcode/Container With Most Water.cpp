class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int area;
        int max_area = 0;
        while(l < r)
        {
            if(height[r] < height[l])
            {
                area = height[r] * (r - l);
                max_area = max(area,max_area);
                r--;
            }
            else
            {
                area = height[l] * (r - l);
                max_area = max(area,max_area);
                l++;
            }
        }
        return max_area;
    }
};
