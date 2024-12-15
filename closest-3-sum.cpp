#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> arr, int target)
{
    // Your code goes here
    int n = arr.size(), mini = INT_MAX, ans = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 2; i++)
    {
        int l = i + 1, r = n - 1;
        while (l < r)
        {
            int sum = arr[i] + arr[l] + arr[r];
            if (sum == target)
                return sum;

            else if (sum < target)
            {
                if (abs(target - sum) < mini)
                {
                    mini = abs(target - sum);
                    ans = sum;
                }
                l++;
            }

            else
            {
                if (abs(sum - target) <= mini)
                {
                    mini = abs(sum - target);
                    ans = sum;
                }
                r--;
            }
        }
    }
    return ans;
}

int main()
{

    return 0;
}