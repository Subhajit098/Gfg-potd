#include <bits/stdc++.h>
using namespace std;

vector<int> recamanSequence(int n)
{
    // code here
    set<int> st;
    st.insert(0);
    vector<int> vec;
    vec.push_back(0);
    for (int i = 1; i <= n; i++)
    {
        int prev = vec[i - 1];
        int element = prev - i;
        if (element >= 0 && st.find(element) == st.end())
        {
            st.insert(element);
            vec.push_back(element);
        }
        else if (st.find(element) != st.end() || element < 0)
        {
            st.insert(prev + i);
            vec.push_back(prev + i);
        }
    }
    return vec;
}