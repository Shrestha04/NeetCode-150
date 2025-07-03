class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int res = r;

        while (l <= r) {
            int m = l + (r - l) / 2;
            long long time = 0;
            for (int p : piles) {
                time += (p + m - 1) / m; 
            }
            if (time <= h) {
                res = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return res;
    }
};
