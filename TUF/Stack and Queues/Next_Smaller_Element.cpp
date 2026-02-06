class Solution {
public:
    vector<int> nextSmallerElements(const vector<int>& arr) 
    {
        vector<int> nse(arr.size());
        stack<int> st;
        for(int i = arr.size() - 1; i >= 0; i--)
        {
            while(!st.empty() and st.top() >= arr[i])
            {
                st.pop();
            }
            nse[i] = st.empty() ? -1 : st.top();
            st.push(arr[i]);
        }    
        return nse;
    }
};
