class Solution{
    public:
        vector<int> printprimefactor(int num)
        {
            vector<int> ans;
            while(num % 2 == 0)
            {
                num /= 2;
                ans.push_back(2);
            }

            for(int i = 3; i*i <= num; i += 2)
            {
                while(num % i == 0)
                {
                    num /= i;
                    ans.push_back(i);
                }
            }

            if(num > 2)
                ans.push_back(num);
            
            return ans;
        } 

        vector<vector<int>> primeFactors(vector<int>& queries)
        {
            vector<vector<int>> result;
            for(int i = 0; i < queries.size(); i++)
            {
                result.push_back(printprimefactor(queries[i]));
            }

            return result;
        }
};