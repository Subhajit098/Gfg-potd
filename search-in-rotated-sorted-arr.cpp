#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int key)
{
    // complete the function here
    int n = arr.size();
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == key)
            return mid;

        else if (arr[mid] >= arr[l]) // edge case for arr[mid]==arr[l]
        {
            if (key >= arr[l] && key < arr[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }

        else
        {
            if (key > arr[mid] && key <= arr[r])
                l = mid + 1;
            else
                r = mid - 1;
        }
    }
    return -1;
}