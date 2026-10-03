class Solution {
public:
    long long hours(vector<int>& piles, int k) {
        long long total = 0;

        for(int i = 0; i < piles.size(); i++) {
            total += ((long long)piles[i] + k - 1) / k;
        }

        return total;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while(low <= high) {
            int mid = low + (high - low) / 2;

            long long req = hours(piles, mid);

            if(req <= h) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};