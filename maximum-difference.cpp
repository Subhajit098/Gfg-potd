#include <bits/stdc++.h>
using namespace std;

// Method 1 : Traversing the array two times
// We need to find the PSE(Previous Smaller element) and NSE(Next smaller element)
void PSE(vector<int> &arr, vector<int> &pse)
{
    int n = arr.size();
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && st.top() >= arr[i])
            st.pop();

        if (!st.empty())
            pse[i] = st.top();

        st.push(arr[i]);
    }
}

void NSE(vector<int> &arr, vector<int> &nse)
{
    int n = arr.size();
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() >= arr[i])
            st.pop();

        if (!st.empty())
            nse[i] = st.top();

        st.push(arr[i]);
    }
}

int findMaxDiff(vector<int> &arr)
{
    // Your code here
    int n = arr.size();
    vector<int> pse(n, 0);
    vector<int> nse(n, 0);
    PSE(arr, pse);
    NSE(arr, nse);
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, abs(pse[i] - nse[i]));
    }
    return maxi;
}

// Method 2 : Traversing the array in single traversal, without using two different vectors for storing the NSE and PSE
int findMaxDiff(vector<int> &arr)
{
    int n = arr.size();
    stack<int> st;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[i] <= st.top())
        {

            int element = st.top();
            st.pop();
            if (element != arr[i]) // edge case, if both top and arr[i] becomes equal, then we dont consider this element
            {
                int nse = arr[i];
                int pse = st.empty() ? 0 : st.top();
                maxi = max(maxi, abs(nse - pse));
            }
        }
        st.push(arr[i]);
    }

    while (!st.empty())
    {
        int nse = 0;
        int element = st.top();
        st.pop();
        int pse = st.empty() ? 0 : st.top();
        maxi = max(maxi, abs(nse - pse));
    }

    return maxi;
}

int main()
{

    return 0;
}