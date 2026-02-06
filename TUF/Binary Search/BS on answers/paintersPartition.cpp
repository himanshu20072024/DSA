class Solution {
public:
    int painters(vector<int>& C, int area)
    {
        int sum = 0;
        int painters = 1;
        for(int i = 0; i < C.size(); i++)
        {
            sum += C[i];
            if(sum > area)
            {
                painters++;
                sum = C[i];
            }
        }
        return painters;
    }

    int totalSum(vector<int>& C)
    {
        int sum = 0;
        for(int i = 0; i < C.size(); i++)
        {
            sum += C[i];
        }
        return sum;
    }

    int paint(int A, int B, vector<int>& C) 
    {
        int low = *max_element(C.begin(), C.end());
        int high = totalSum(C);
        int result = high;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            int paintersReq = painters(C, mid);
            if(paintersReq <= A)
            {
                result = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        long long time = (long long)B*(long long)result;
        return time%10000003;
    }
};