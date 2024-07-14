#include <bits/stdc++.h>
using namespace std;

// 1st method :
void segregate0and1(vector<int> &arr)
{
    // code here
    int l = 0, r = arr.size() - 1;
    while (l <= r)
    {
        while (arr[l] == 0)
            l++;
        while (arr[r] == 1)
            r--;
        if (l <= r)
            swap(arr[l], arr[r]);
    }
}

// 2nd method :
void segregate0and1(vector<int> &arr)
{
    // code here
    int i = 0, j = 0;
    while (j < arr.size())
    {
        if (arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++, j++;
        }
        else
        {
            j++;
        }
    }
}
int main()
{

    return 0;
}