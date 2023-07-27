class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size(); 
        sort(intervals.begin(),intervals.end()); 
        vector<vector<int>> longestIntervals;  
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0] > intervals[i - 1][0]) longestIntervals.push_back(intervals[i - 1]);    
        }

        longestIntervals.push_back(intervals[n - 1]); 

        int ans = intervals.size() - longestIntervals.size(); 
        int r = longestIntervals[0][1]; 
        for(int i=1;i<longestIntervals.size();i++) 
        {
            if(longestIntervals[i][0] > r) r = longestIntervals[i][1]; 
            else if(longestIntervals[i][1] > r) r = longestIntervals[i][1]; 
            else ans++; 
        }
        return n - ans;  
    }
};


 
