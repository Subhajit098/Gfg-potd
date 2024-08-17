#include <bits/stdc++.h>
using namespace std;

// Method 1
bool canSplit(vector<int> &arr)
{
    // code here
    int total = 0;
    for (int it : arr)
        total += it;

    if (total % 2)
        return false;

    int half = total / 2;

    int sum = 0;
    for (int i : arr)
    {
        sum += i;
        if (total - sum == half)
            return true;
    }

    return false;
}

// Method 2 using two pointers
bool canSplit(vector<int> &arr)
{
    int n = arr.size();
    if (n < 2)
        return false;
    int l = 0;
    int r = n - 1;
    int left = arr[l];
    int right = arr[r];
    while (l < r)
    {
        if (l + 1 == r)
            break;
        else if (left <= right)
            left += arr[++l];
        else
            right += arr[--r];
    }
    return (left == right);
}

int main()
{

    return 0;
}
