#include <bits/stdc++.h>
using namespace std;

// 1st method using hashmap and prefix sum
int maxPathSum(vector<int> &arr1, vector<int> &arr2)
{
    // Code here
    int n = arr1.size(), m = arr2.size();
    unordered_map<int, int> mp; // for finding the common numbers in both arrays
    for (int i = 0; i < n; i++)
    {
        mp[arr1[i]] = i;
        if (i > 0)
        {
            arr1[i] = arr1[i - 1] + arr1[i]; // calculating the prefix sum side by side
        }
    }

    vector<pair<int, int>> store;
    for (int i = 0; i < m; i++)
    {
        if (mp.find(arr2[i]) != mp.end())
        {
            store.push_back({mp[arr2[i]], i}); // storing the indices of the common numbers.
        }
        if (i > 0)
        {
            arr2[i] = arr2[i - 1] + arr2[i]; // calculating the prefix sum side by side
        }
    }

    int initial1 = 0, initial2 = 0;
    int ans = 0;

    int cnt = 0;
    int i = 0, j = 0;
    int size = store.size();
    while (cnt < size)
    {
        i = store[cnt].first, j = store[cnt].second;

        int sum1 = arr1[i] - initial1;
        int sum2 = arr2[j] - initial2;

        ans += max(sum1, sum2); // taking the maximum of the two sums and then going to the next common number

        initial1 = arr1[i], initial2 = arr2[j]; // track of the previous prefix sums else one number will be summed twice
        cnt++;
    }

    if (!store.empty())
    {
        ans += max((arr1[n - 1] - arr1[store[size - 1].first]),
                   (arr2[m - 1] - arr2[store[size - 1].second]));
        // after the common number's index has crossed, take the max of the last prefix sums of both arrays
    }
    else
    {
        ans += max(arr1[n - 1], arr2[m - 1]); // if nothing is common simply add the prefix sums
    }

    return ans;
}

// 2nd method using two pointers(Same logic)
int maxPathSum(vector<int> &arr1, vector<int> &arr2)
{
    // Code here
    int n = arr1.size(), m = arr2.size();
    int i = 0, j = 0;
    int sum1 = 0, sum2 = 0;
    int ans = 0;

    while (i < n and j < m)
    {
        if (arr1[i] < arr2[j])
        {
            sum1 += arr1[i];
            i++;
        }

        else if (arr2[j] < arr1[i])
        {
            sum2 += arr2[j];
            j++;
        }

        else
        {
            ans += max(sum1 + arr1[i], sum2 + arr1[i]);
            sum1 = 0, sum2 = 0, i++, j++;
        }
    }

    while (i < n)
    {
        sum1 += arr1[i];
        i++;
    }

    while (j < m)
    {
        sum2 += arr2[j];
        j++;
    }

    ans += max(sum1, sum2);

    return ans;
}

int main()
{

    return 0;
}