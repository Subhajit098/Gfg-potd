#include <bits/stdc++.h>
using namespace std;

// With stack approach

vector<int> bracketNumbers(string str)
{
    // Your code goes here
    int n = str.size();
    stack<pair<char, int>> st;
    vector<int> ans;
    int count = 1;
    for (int i = 0; i < n; i++)
    {

        if (str[i] == '(' || str[i] == ')')
        {

            if (st.empty())
            {
                st.push(make_pair(str[i], count));
                ans.push_back(count);
                count++;
            }

            else if (st.top().first == '(' && str[i] == ')')
            {
                ans.push_back(st.top().second);
                st.pop();
            }
            else
            {
                st.push(make_pair(str[i], count));
                ans.push_back(count);
                count++;
            }
        }
    }

    return ans;
}

// Without stack approach
