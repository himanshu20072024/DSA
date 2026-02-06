// this is kadans algorithm
// this one is optimal solution
// time complexity is O(N)
// space complexity is O(1)


class Solution {
public:
    int maxSubArray(vector<int>& arr) 
    {
        int sum = 0;
        int maxi = INT_MIN;
        for(int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
            maxi = max(maxi, sum);
            if(sum < 0)
            {
                sum = 0;
            }
        }
        return maxi;
        
    }
};

// better solution with time complexity of O(N^2)

class Solution {
public:
    int maxSubArray(vector<int>& arr) 
    {
        int _max = INT_MIN;
        for(int i = 0; i < arr.size(); i++)
        {
            for(int j = i; j < arr.size(); j++)
            {
                int sum = 0;
                for(int k = i; k <= j; k++)
                {
                    sum += arr[k];
                }
                _max = max(_max, sum);
            }
        }
        return _max;
    }
};

// bruteforce solution with time complexity of O(N^3)

class Solution {
public:
    int maxSubArray(vector<int>& arr) 
    {
        int _max = INT_MIN;
        for(int i = 0; i < arr.size(); i++)
        {
            for(int j = i; j < arr.size(); j++)
            {
                int sum = 0;
                for(int k = i; k <= j; k++)
                {
                    sum += arr[k];
                }
                _max = max(_max, sum);
            }
        }
        return _max;
    }
};