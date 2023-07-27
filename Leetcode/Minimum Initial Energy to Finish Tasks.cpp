class Solution {
public:
    bool check(int energy,vector<pair<int,int>> tasks)
    {
        for(int i=0;i<tasks.size();i++)
        {
            int actual = tasks[i].second;
            int minimum = tasks[i].first;
            if(minimum > energy) return false;
            energy -= actual;
        }
        return true;
    }
    int minimumEffort(vector<vector<int>>& tasks) {
        vector<pair<int,int>> temp;
        for(int i=0;i<tasks.size();i++) temp.push_back({tasks[i][1] - tasks[i][0],i});
        sort(temp.begin(),temp.end());
        reverse(temp.begin(),temp.end());
        vector<pair<int,int>> v;
        for(int i=0;i<temp.size();i++)
        {
            int idx = temp[i].second;
            v.push_back({tasks[idx][1],tasks[idx][0]});
        }
        int lo = 0;
        int hi = INT_MAX;
        int ans;
        while(lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if(check(mid,v))
            {
                hi = mid - 1;
                ans = mid;
                continue;
            }
            else
            {
                lo = mid + 1;
                continue;
            }
        }
        return lo;
    }
};
