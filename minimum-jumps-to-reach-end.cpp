#include <bits/stdc++.h>
using namespace std;

int minJumps(vector<int> &arr)
{
    // Your code here
    int n = arr.size();
    int idx = 0;
    int cnt = 0;
    while (idx < n)
    {
        int val = arr[idx];
        if (idx + val >= n - 1)
        {
            cnt++;
            return cnt;
        }
        cnt++;
        int ans = INT_MIN;
        int newCurr = idx;
        for (int j = idx + 1; j <= idx + val; j++)
        {
            if (ans <= arr[j] + j)
            {
                ans = arr[j] + j;
                newCurr = j;
            }
        }
        if (ans != INT_MIN)
        {
            idx = newCurr;
        }
        if (val == 0)
        {
            return -1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of arr: ";
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }
    int jumps = minJumps(arr);
    cout << "Minimum number of jumps : " << jumps << endl;
    return 0;
}