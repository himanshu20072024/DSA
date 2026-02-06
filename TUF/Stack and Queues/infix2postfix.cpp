#include<bits/stdc++.h>
using namespace std;

int priority(char ch)
{
    if(ch == '+' or ch == '-')
        return 1;
    else if(ch == '*' or ch == '/')
        return 2;
    else
        return 3;
}

int main() 
{
    string s;
    getline(cin, s);
    int i = 0;
    stack<char> st;
    string ans;
    int num = s.size();
    for(int i = 0; i < num; i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') or (s[i] >= 'A' && s[i] <= 'Z') or (s[i] >= '0' && s[i] <= '9'))
        {
            ans += s[i];
        }
        else if(s[i] == '(')
        {
            st.push(s[i]);
        }
        else if(s[i] == ')')
        {
            while(!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while((!st.empty()) && (st.top() != '(') && (priority(s[i]) <= priority(st.top())))
            {
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while(!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    cout << endl << endl << endl;
    cout << ans;
    return 0;
}