#include <bits/stdc++.h>
using namespace std;

// Method 1 using stack
vector<int> PSE(vector<int> arr)
{
    int n = arr.size();
    stack<int> st;
    vector<int> ans(n, -1);
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[i] <= st.top())
            st.pop();

        if (!st.empty())
            ans[i] = st.top();

        st.push(arr[i]);
    }

    return ans;
}

vector<int> NGE(vector<int> arr)
{
    int n = arr.size();
    stack<int> st;
    vector<int> ans(n, -1);
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[i] >= st.top())
            st.pop();

        if (!st.empty())
            ans[i] = st.top();

        st.push(arr[i]);
    }

    return ans;
}

vector<int> find3Numbers(vector<int> &arr)
{
    // Code here
    int n = arr.size();
    vector<int> ans;
    vector<int> pse = PSE(arr);
    vector<int> nge = NGE(arr);

    for (int i = 0; i < n; i++)
    {
        if (pse[i] != -1 && nge[i] != -1)
        {
            ans.push_back(pse[i]);
            ans.push_back(arr[i]);
            ans.push_back(nge[i]);
            break;
        }
    }

    return ans;
}

// Method 2 can only check for true or false;
bool findthreeNumbers(vector<int> &arr)
{
    int n = arr.size();
    if (n < 3)
        return false;

    sort(arr.begin(), arr.end());

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int upper = upper_bound(arr.begin(), arr.end(), arr[i]) - arr.begin();
        int lower = lower_bound(arr.begin(), arr.end(), arr[i]) - arr.begin();

        if (upper != n && lower != n && lower - 1 >= 0)
        {
            ans.push_back(arr[upper]);
            ans.push_back(arr[i]);
            ans.push_back(arr[lower - 1]);
            break;
        }
    }

    return ans.size() == 3;
}

int main()
{

    return 0;
}