class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1, e = *max_element(piles.begin(),piles.end()), mid =s+(e-s)/2;
        while (s <= e) {
         
            int k = 0;
            for (int i = 0; i < piles.size(); i ++) 
                k += ceil(1.0 * piles[i] / mid);
            if (k > h)
                s = mid+ 1;
            else
                e = mid - 1;
            mid =s+(e-s)/2;
        }
        return s;
    }
};