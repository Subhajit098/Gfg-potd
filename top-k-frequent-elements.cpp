#include <bits/stdc++.h>
using namespace std;

// Better Approach
// TC: O(n) + O(2*n*long(2*n))
// SC: O(2*n)
// Problem constraints : 1 <= N <= 105 , 1<= nums[i] <=105 , 1 <= k <= N
// Expected Time Complexity : O(NlogN)
// Expected Auxiliary Space : O(N)

static bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second > b.second)
        return true;

    else if (a.second == b.second)
    {
        if (a.first > b.first)
            return true;
        return false;
    }
    return false;
}

vector<int> topK(vector<int> &nums, int k)
{
    // Code here
    vector<int> ans;
    int n = nums.size();
    int maxi = *max_element(nums.begin(), nums.end());
    vector<pair<int, int>> new_pair(maxi + 1, {0, 0});
    for (int i = 0; i < n; i++)
    {
        if (!new_pair[nums[i]].first)
            new_pair[nums[i]].first = nums[i];
        new_pair[nums[i]].second++;
    }

    sort(new_pair.begin(), new_pair.end(), cmp);
    for (int i = 0; i < k; i++)
    {
        ans.push_back(new_pair[i].first);
    }
    return ans;
}


// Optimal approach according to the question :
// TC: O(n*log(n)) + O(n)
// SC: O(2*n) + O(n)
static bool cmp2(pair<int, int> a, pair<int, int> b)
{
    if (a.first > b.first)
        return true;
    else if (a.first < b.first)
        return false;
    else
        return a.second > b.second;
}

vector<int> topK(vector<int> &nums, int k)
{
    // Code here
    vector<int> ans;
    unordered_map<int, int> mp;
    vector<pair<int, int>> arr;

    for (auto it : nums)
    {
        mp[it]++;
    }

    for (auto it : mp)
    {
        arr.push_back({it.second, it.first});
    }

    sort(arr.begin(), arr.end(), cmp2);

    for (int i = 0; i < k; i++)
    {
        ans.push_back(arr[i].second);
    }
    return ans;
}
