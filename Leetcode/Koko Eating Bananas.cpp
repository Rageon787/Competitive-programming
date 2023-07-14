class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans = INT_MAX; 
        int lo = 1; 
        int hi = 1e9; 
        while(lo <= hi)
        {
            int mid = (lo + hi) / 2;
            long long int taken = 0; 
            for(int i=0;i<piles.size();i++) 
            {
                //taken += ceil((float)piles[i]/(float)mid);
                taken += (piles[i] / mid); 
                if(piles[i] % mid != 0) taken++; 
            } 
            if(taken > h) lo = mid + 1; 
            else
            {
                ans = mid; 
                hi = mid - 1; 
            } 
        }

        return ans; 
    }
};
