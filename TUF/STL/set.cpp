#include<bits/stdc++.h>
using namespace std;

void explainSet()
{
    set<int> st;
    st.insert(1); // {1}
    st.insert(2); // {1, 2}
    st.emplace(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}

    // functionality of insert in vector can be used also , that only increases efficiency 
    // begin(), end(), rbegin(), rend(), size(), empty() and swap() are same like other files 

    auto it = st.find(3); // it returns iterator to 3
    auto it1 = st.find(6); //  not found then it returns st.end(), which points just after the last element

    // printing the set
    set<int>::iterator set_iterator = st.begin();
    for(auto set_iterator = st.begin() ; set_iterator != st.end() ; set_iterator++)
    {
        cout << *(set_iterator) << " " ;
    }
    cout << endl;

    st.erase(1); // erases 1 // takes logarithmic time

    // printing the set
    set<int>::iterator set_iterator1 = st.begin();
    for(auto set_iterator1 = st.begin() ; set_iterator1 != st.end() ; set_iterator1++)
    {
        cout << *(set_iterator1) << " " ;
    }
    cout << endl;

    int count = st.count(2); // if 2 is there it gives 1 else 0 everytime 

    auto it2 = st.find(2); 
    st.erase(it2); // it takes constant time

    // creating a new set
    set<int> st1;
    st1.insert(1);
    st1.emplace(2);
    st1.emplace(3);
    st1.emplace(4);
    st1.emplace(5);
    st1.emplace(6);
    st1.emplace(7);
    st1.emplace(8);
    st1.emplace(9);
    st1.emplace(10);

    auto it3 = st1.find(2), it4 = st1.find(8); 
    st1.erase(it3, it4); // after eraseing {1, 8, 9, 10} [first, last)
    // lower_bound() and upper_bound() function works in the same way
    // as in vector it does 

    // this is the syntax
    auto it5 = st.lower_bound(8);
    auto  it6 = st.upper_bound(10);
}

void explainMultiSet()
{
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}
    ms.insert(1); // {1, 1, 1, 1}

    ms.erase(1) ; // all 1's are erased 
    int count = ms.count(1); 
    cout << count << endl;

    ms.insert(1);
    ms.insert(2);

    // only a single one is erased
    ms.erase(ms.find(1)); // it erases the first occurence of '1'
    
    // if i want to erase 3 elment starting from 1
    auto it1 = ms.find(1);
    auto it2 = it1;
    advance(it2, 3);  // move 3 steps forward
    ms.erase(it1, it2);

    // rest all function same as set
}

void explainUSet()
{
    unordered_set<int> st;
    // lower_bound and upper_bound function does not work rest all functions are same as above
    // it does not stores in any particular order it has a better complexity than set in most cases, except some when collisions happens
}

int main()
{
    cout << "--- Set ---" << endl;
    explainSet();

    cout << "--- MultiSet ---" << endl;
    explainMultiSet();

    cout << "--- Unordered Set ---" << endl;
    explainUSet();
}
