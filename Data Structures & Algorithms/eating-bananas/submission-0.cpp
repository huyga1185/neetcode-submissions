class Solution {
public:
    int countTotalTime(vector<int>& piles, int speed) {
        int count = 0;
        for (int pile : piles) {
            count += (pile + speed - 1) / speed;
        }
        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = -1;
        for (int pile : piles) {
            if (pile > max) max = pile;
        }
        int k = -1;
        int l = 1;
        int r = max;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (countTotalTime(piles, mid) <= h) {
                r = mid - 1;
                k = mid;
            } else {
                l = mid + 1;
            }
        }
        return k;
    }
};
