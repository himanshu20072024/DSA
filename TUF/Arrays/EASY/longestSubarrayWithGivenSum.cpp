#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int qSum;
    cout << "Enter the sum : ";
    cin >> qSum;


    //  bruteforce method 
    //  time complexity around O(n^2) not exactly because loop is diminishing 

    int length = 0;
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = i; j < n; j++)
        {
            sum += arr[j];
            if(sum == qSum) 
            length = max(length, j-i+1);
        }
    }
    cout << length << endl;

    // better solution using hashmap and optimal when array contains negatives
    // time complexity is O(N*log N) if we are using map it will be O(N*1) if unordered map is used but in worst case it may become O(N*N)
    // space complexity is O(n)
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        if(sum == qSum) 
        {
            maxLen = max(maxLen, i+1);
        }
        long long remaining = sum - qSum;
        if(preSumMap.find(remaining) != preSumMap.end()) 
        {
            int len = i - preSumMap[remaining];
            maxLen = max(maxLen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end())
            preSumMap[sum] = i;
    }
    return maxLen;
    

    // optimal solution when array contains positives and zero only
    // we cannot use negatives because say if we increase left by one position and the sum got increased because next element was negative
    // at that point our logic breaks same for the right 
    // time complexity is O(2*n)
    // space complexity is O(1)
    int left = 0, right = 0;
    int sum = arr[0];
    int maxLen = 0;
    while(right < arr.size())
    {
        while(left <= right and sum > qSum)
        {
            sum -= arr[left];
            left++;
        }
        if(sum ==  qSum)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if(right < arr.size())
            sum += arr[right];
    }

    
    return 0;
}