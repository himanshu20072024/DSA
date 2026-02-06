class Solution {
public:
    long long floorSqrt(long long n)  
    {
        int low = 0;
        int high = n;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if(mid * mid <= n)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return high;
    }
};