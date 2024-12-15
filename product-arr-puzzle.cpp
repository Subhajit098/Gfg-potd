#include <bits/stdc++.h>
using namespace std;

vector<long long int> productExceptSelf(vector<long long int> &nums)
{
    // code here
    int n = nums.size();
    long long prod = 1;
    int count_0 = 0;
    for (auto it : nums)
    {
        if (it == 0)
            count_0++;
        else
            prod *= it;
    }

    vector<long long> ans(n, 0);

    if (count_0 > 1)
    {
        return ans;
    }

    if (count_0 == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
                ans[i] = prod;
        }
        return ans;
    }

    for (int i = 0; i < n; i++)
    {
        ans[i] = prod / nums[i];
    }

    return ans;
}

int main()
{
    return 0;
}