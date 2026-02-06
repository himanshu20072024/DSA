#include<iostream>
#include<vector>
using namespace std;

void explainVector()
{
    vector<int> v;   //   {}
    v.push_back(1);   //   {} -> {1}
    v.emplace_back(2);   //  {1} -> {1 2}
    // v.insert(v.begin(), 67); // inserts 67 at the front

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});   // if we use push back we must use {} these arrows 
    vec.emplace_back(1,2);    // emplace back automatically assigns it to pairs

    vector<int> v1(5, 100);   // -> {100, 100, 100, 100, 100}

    vector<int> v2(5);  // -> {0, 0, 0, 0, 0} or assigns some garbage value
    v2.push_back(4);   //  NOW V2 -> {0, 0, 0, 0, 0, 4}

    vector<int> v3(5,20);

    vector<int> v4(v3);  // a copy of v3 goes in v4

    // now how to acces elements in vector 
    // we can just like arrays or using iterators

    cout<<v[0]<<" "<<v[1]<<" "<<v2[5];  // accesing elements like arrays

    vector<int>::iterator it = v.begin();  // this v.begin points to the memory of 1st element of vector v 
    it++;
    cout << *(it) << " "<<endl; 
    it = it + 2;   // shift pointer 2 position forward
    cout << *(it) << " " << endl;  // gives garbage value as no value is provided above by our side
    vector<int>::iterator itt = v.end();   // here it does not point to the end element of v2 but points the next memory location to last element address of v2
    // if i wwant to point to end then i have to do v2-- after v2.end();
    // vector<int>::iterator it = v.rend();  // these 2 are not used so much
    // vector<int>::iterator it = v.rbegin();   // this also not used so much

    cout<<v.back() << endl;  // prints the last element 

    // printing vector using loops 
    for(vector<int>::iterator it = v.begin() ; it != v.end() ; it++)
    {
        cout << *(it) << " ";
    }
    cout<<endl;

    // declaring auto instead of long syntax c++ automatically assigns it what it is  
    for(auto it = v.begin() ; it != v.end() ; it++)
    {
        cout << *(it) << " ";
    }
    cout<<endl;

    //another way to print vector
    for(auto it : v)
    {
        cout << it << " ";
    }
    cout<<endl;

    // declaring a new vector 
    vector<int> v7 = {1,2,3,4,5,6,7,8,9};
    
    // declaring iterator 
    vector<int>::iterator v7_iterator = v7.begin();

    // printing the vector
    for(auto v7_iterator = v7.begin() ; v7_iterator != v7.end() ; v7_iterator++)
    {
        cout << *(v7_iterator) << " ";
    }
    cout<<endl;

    // deleting the single element of vector
    v7.erase(v7.begin() + 1);  // 2 will be deleted from the v7 vector

    // deleting vector from one element till another element 
    v7.erase(v7.begin() + 2, v7.begin() + 6); //here v7.begin + 2 is included to delete but v7.begin() + 6 is not included to delete  

    // proof of deletion by printing the v7 vector
    for(auto v7_iterator = v7.begin() ; v7_iterator != v7.end() ; v7_iterator++)
    {
        cout << *(v7_iterator) << " ";
    }
    cout<<endl;

    // insert function
    v7.insert(v7.begin(), 72);  // it is going to insert 72 at the beggining of v7 vector

    //checking of insertion
    cout<<*(v7.begin()) << endl;

    // inserting n times a number after at a given place in vector
    v7.insert(v7.begin() + 1, 4, 100);

    // checking of insertion
    for(auto v7_iterator = v7.begin() ; v7_iterator != v7.end() ; v7_iterator++)
    {
        cout<<*(v7_iterator)<<" ";
    }
    cout<<endl;

    // creating a new vector named as copy
    vector<int> copy(3,500);

    // inserting the copy vector into v7 vector from copy.begin() to copy.end()
    v7.insert(v7.begin() + 2, copy.begin(), copy.end());

    // checking of insertion
    for(auto v7_iterator = v7.begin() ; v7_iterator != v7.end() ; v7_iterator++)
    {
        cout<<*(v7_iterator)<<" ";
    }
    cout<<endl;

    // checking size of vector 
    cout << v7.size() << endl;  // gives size of vector

    // checking pop_back function
    cout << v7.back() << endl;
    v7.pop_back(); // removes the last element 
    cout << v7.back() << endl;

    // creating 2 new vectors
    vector<int> vec1(2,300);
    vector<int> vec2(3,100);

    // checking swap function in vector
    vec1.swap(vec2);
    cout << *(vec1.begin()) << endl;  // gives 100 instead of 200 because they are swapped 

    // checking clear function in vector
    vec1.clear();  // erases the netire vector

    cout << v.empty() << endl;  // gives 0 because vector v is not empty 
    cout<< vec1.empty() << endl; // gives 1 because vector vec1 is empty 

    
}

int main()
{
    explainVector();
}