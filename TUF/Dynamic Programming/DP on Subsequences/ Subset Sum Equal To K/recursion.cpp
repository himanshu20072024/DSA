#include <bits/stdc++.h> 
bool f(int idx, int target, vector<int> &arr) {
    // edge cases for returning
    if(target == 0) return true;
    if(idx < 0) return false;
    if(idx == 0 && arr[idx] == target) return true;
    
    if(arr[idx] > target) return f(idx-1, target, arr);

    bool pick = false;
    if(target >= arr[idx])
        pick = f(idx-1, target-arr[idx], arr);
    bool unPick = f(idx-1, target, arr);

    return (pick || unPick);

}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    // lets do it using recursion !!
    // i will start from the last index and will pick / unpick and call next recursion with index-1 

    return f(n-1, k, arr);
}