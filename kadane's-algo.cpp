#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> &arr)
{
    // code here...
    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum > maxi)
            maxi = max(maxi, sum);

        if (sum < 0)
            sum = 0;
    }
    return maxi;
}

int main()
{

    return 0;
}
