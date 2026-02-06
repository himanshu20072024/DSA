#include<iostream>
#include<list>
using namespace std;

void explainList()
{
    list<int> ls;
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5); // {5, 2, 4}
    ls.emplace_front(7); // {7, 5, 2, 4}
    cout << *(ls.begin()) << endl;
    cout << ls.front() << endl;

    list<int>::iterator list_iterator = ls.begin(); // ya we can create iterator in list also

    // rest functions are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

int main()
{
    explainList();
}