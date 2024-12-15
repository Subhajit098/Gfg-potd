#include <bits/stdc++.h>
using namespace std;

static bool cmp(string a, string b)
{
    return a + b > b + a;
}

string printLargest(int n, vector<string> &arr)
{
    // code here
    sort(arr.begin(), arr.end(), cmp);
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        ans += arr[i];
    }
    return ans;
}