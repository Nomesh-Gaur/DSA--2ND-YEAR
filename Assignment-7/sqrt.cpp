class Solution {
public:
    int mySqrt(int n) {
        long low = 1, high = n;
        int sqrt = 0;
        
        while (low <= high) {
            long long mid = (low + high)/2;
            if ((mid * mid) > n) {
                high = mid - 1;
            }
            else if ((mid * mid) <= n) {
                if ((mid + 1) * (mid + 1) > n) {
                    sqrt =  mid;
                }
                low = mid + 1;
            }
        }
        return sqrt;
        
    }
};
