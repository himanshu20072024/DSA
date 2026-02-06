#include<bits/stdc++.h>
using namespace std;

// its simple character hashing if only lower case alphabets are there then just has[26] and hash[s[i] - 'a']++ 
    
int main()
{
    string s;
    cout << "Enter string : ";
    getline(cin, s);
    int hash[256] = {0};
    for(int i = 0 ; i < s.size() ; i++)
    {
        hash[s[i]]++;
    }

    char ch;
    cout << "Enter the character : ";
    cin >> ch;
    cout << ch << " is " << hash[ch] << " times here in string";

}