#include<bits/stdc++.h>
using namespace std;

int priority(char ch) 
{
    if(ch == '+' || ch == '-') return 1;
    else if(ch == '*' || ch == '/') return 2;
    else if(ch == '^') return 3; // highest
    return -1;
}

int main() 
{
    string s;
    getline(cin, s);
    int size = s.length();
    string ans;
    stack<char> st;

    reverse(s.begin(), s.end());
    for(int i = 0; i < size; i++)
    {
        if(s[i] == '(') s[i] = ')';
        if(s[i] == ')') s[i] = '(';
    }
    for(int i = 0; i < size; i++)
    {
        if((s[i] >= 'A' && s[i] <= 'Z') or (s[i] >= 'a' && s[i] <= 'z') or (s[i] >= '0' && s[i] <= '9'))
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
            if(s[i] == '^')
            {
                while(!st.empty() && (priority(s[i]) <= priority(st.top())))
                {
                    ans += st.top();
                    st.pop();
                }
            }
            else
            {
                while(!st.empty() && (priority(s[i]) < priority(st.top())))
                {
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
    }
    while(!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    cout << ans;
    return 0;
}