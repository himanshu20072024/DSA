
// this one is better solution
// here time complexity is O(N*log(N)) or O(N*N) depeneding on which map we are using 
//space complexity is O(N) because we are using a hashmap where we are dumping all the number

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int>mpp;
        for(int i = 0; i < nums.size(); i++)
        {
            int number = target - nums[i];
            if(mpp.find(number) != mpp.end())
            {
                return {mpp[number], i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};


// this one is optimal but upper one also optimal here
// time complexity is O(N + N*log(N))
// space complexity is O(1) but we are distorting the given array

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n); // pair = (value, original index)

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr[i] = {x, i};
    }

    cout << "Enter target : ";
    int target;
    cin >> target;

    sort(arr.begin(), arr.end()); // sort by value

    int left = 0, right = n - 1;
    while (left < right) // only valid while left < right
    {
        int sum = arr[left].first + arr[right].first;
        if (sum == target) {
            cout << "[" << arr[left].second << "," << arr[right].second << "]\n";
            break;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return 0;
}

// this one is bruteforce approach 
// time complexity O(N^2)

for(int i = 0; i < n; i++)
{
    for(int j = i + 1; j < n; j++)
    {
        if(arr[i] + arr[j] == target)
        {
            cout << i << "," << j;
            break;
        }
    }
}
