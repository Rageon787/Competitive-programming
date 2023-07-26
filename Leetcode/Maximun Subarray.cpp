class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int max_s = INT_MIN,c = 0;
	for(int i=0;i<a.size();i++)
	{
		c = c + a[i];
		max_s = max(max_s,c);
		if(c < 0) 
		{
			c = 0;
			continue;
		}
	}
	return max_s;

    }
};
