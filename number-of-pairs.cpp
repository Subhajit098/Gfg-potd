#include <bits/stdc++.h>
using namespace std;

long long countPairs(vector<int> &arr, vector<int> &brr)
{
    // Your Code goes here.
    int one = 0, two = 0, three = 0, four = 0; // For exceptions
    sort(brr.begin(), brr.end());

    for (auto it : brr)
    {
        if (it == 1)
            one++;
        else if (it == 2)
            two++;
        else if (it == 3)
            three++;
        else if (it == 4)
            four++;
    }

    int n = arr.size(), m = brr.size();
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 1) // exception cases in arr array
        {

            ans += one;

            if (arr[i] == 2)
            {
                ans -= (three + four);
            }

            else if (arr[i] == 3)
            {
                ans += two;
            }

            ans += m - (upper_bound(brr.begin(), brr.end(), arr[i]) - brr.begin());
        }
    }

    return ans;
}

int main()
{

    return 0;
}