#include <bits/stdc++.h>
using namespace std;

// Method 1 using stack , TC : O(n) and SC : O(n)
int maxLength(string &str)
{
    // code here
    int n = str.size();
    stack<int> st; // storing the invalid indices

    for (int i = 0; i < n; i++)
    {
        if (!st.empty() && str[st.top()] == '(' && str[i] == ')')
            st.pop();

        else
        {
            st.push(i);
        }
    }

    if (st.empty())
        return n;

    vector<int> store;

    while (!st.empty())
    {
        store.push_back(st.top());
        st.pop();
    }

    reverse(store.begin(), store.end());

    // for edge case if from the end no invalid bracket is present
    store.push_back(n);

    // for edge case -> if from the begining no invalid bracket is present
    int maxi = 0, top = -1;

    for (int i = 0; i < store.size(); i++)
    {
        maxi = max(maxi, store[i] - top - 1);
        top = store[i];
    }

    return maxi;
}

// Method 2 using two pointers , TC : O(n) and SC : O(1)
int maxLength(string &str)
{
    // code here
    int n = str.size();
    int left = 0, right = 0;

    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(')
            left++;
        else
            right++;

        if (left == right)
            maxi = max(maxi, 2 * left);

        // no else condition will be here as if left>right, there is still scope of having some right, so that left becomes equal to right
        else if (right > left)
            left = right = 0;
    }

    left = right = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] == '(')
            left++;
        else
            right++;

        if (left == right)
            maxi = max(maxi, 2 * left);

        else if (right < left)
            left = right = 0;
    }

    return maxi;
}

int main()
{

    return 0;
}