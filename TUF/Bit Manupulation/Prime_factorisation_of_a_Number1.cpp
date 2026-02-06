// ✅ Time Complexity:

// Preprocessing: O(n log log n)

// Each query: O(log n)

// Total for q queries: O(n log log n + q log n)

// ✅ Space Complexity:

O(n + q log n)

class Solution {
   public :

    int n;
    vector<int> arr;
    Solution()
    {
        n = 1000001;
        arr.resize(n);
        for(int i = 2; i <= n; i++)
        {
            arr[i] = i;
        }

        for(int i = 2; i*i <= n; i++)
        {
            if(arr[i] == i)
            {
                for(int j = i*i; j <= n; j += i)
                {
                    if(arr[j] == j)
                    {
                        arr[j] = i;
                    }
                }
            }
        }
    }

    vector<int> function(int num)
    {
        vector<int> ans;
        while(num != 1)
        {
            ans.push_back(arr[num]);
            num /= arr[num];
        }
        return ans;
    }

    vector<vector<int>> primeFactors(vector<int>& queries) 
    {
        vector<vector<int>> ans;
        for(int i = 0; i < queries.size(); i++)
        {
            ans.push_back(function(queries[i]));
        }

        return ans;
    }
};