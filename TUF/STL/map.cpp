#include<bits/stdc++.h>
using namespace std;

// map stores unique keys in sorted order something similar to set container 
void explainMap()
{
    // 1️⃣ Simple map: key=int, value=int
    map<int, int> mpp;
    mpp[1] = 1;              // Inserts key 1 with value 1
    mpp.emplace(3, 1);       // Inserts key 3 with value 1 (faster than insert in some cases)
    mpp.insert({2, 4});      // Inserts key 2 with value 4

    // above and lower ones have stored first key as 1 then 2 then 3 whatever order you give they store in ascending key order

    // 2️⃣ Map with value as a paira
    map<int, pair<int, int>> mpp1;
    mpp1[5] = {10, 20};      // Key = 5, Value = pair(10, 20)

    // 3️⃣ Map with key as a pair
    map<pair<int, int>, int> mpp2;
    mpp2[{2, 3}] = 4;        // Key = pair(2, 3), Value = 4

    for(auto it = mpp.begin(); it != mpp.end(); it++)
    {
        cout << it->first << " " << it->second << " ";
        // here we used '->' because 'it' is an iterator (like a pointer)
    }
    cout << endl;
    
    for(auto it : mpp)
    {
        cout << it.first << " " << it.second << " ";
        // here we used '.' because 'it' is a pair, not an iterator or pointer
    }
    cout << endl;

    cout << mpp[1] << endl;  // prints 1
    cout << mpp[2] << endl;  // prints 4
    cout << mpp[3] << endl;  // prints 1
    cout << mpp[89] << endl;  // prints 0 as mpp[89] does not exists

    auto it = mpp.find(2); // it is an iterator pointing to the element with key = 2

    cout << it->second << " ";      // Accesses the value at key 2
    // 'it' is an iterator (like a pointer), so we use '->' to access the value in the pair it points to
    
    cout << (*it).first << endl;    // Accesses the key itself (which is 2)
    // '*it' gives the pair (key, value), so we use dot '.' after dereferencing 

    auto it1 = mpp.find(34); // as key 34 is not there it points to the mpp.end() means memory next to the last element memory 

    // this ois the syntax
    auto it2 = mpp.lower_bound(2);
    auto it3 = mpp.upper_bound(3);

    // erase , swap , size , empty , are same as previous 


}

void explainMultiMap()
{
    // everything same as map, only it can store multiple keys
    // only mpp[key] cannot be used here 

    multimap<int, string> mmp;

    mmp.insert({1, "apple"});
    mmp.insert({2, "banana"});
    mmp.insert({1, "carrot"});
    mmp.emplace(1, "written on 27 july 2025");

    // Printing all elements
    for (auto it : mmp) 
    {
        cout << it.first << " -> " << it.second << endl;
    }

    // Output:
    // 1 -> apple
    // 1 -> banana
    // 2 -> carrot
}

void explainUnorderedMap()
{
    // same as set and unordered_set difference.

    unordered_map<int, string> ump;

    ump[5] = "dog";
    ump[2] = "cat";
    ump[7] = "rabbit";

    for (auto it : ump) {
        cout << it.first << " -> " << it.second << endl;
    }

    // Output order is NOT sorted
}
int main()
{
    explainMap();
    explainMultiMap();
    explainUnorderedMap();
}
