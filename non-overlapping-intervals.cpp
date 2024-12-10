#include <bits/stdc++.h>
using namespace std;

int minRemoval(vector<vector<int>> &intervals)
{
    // code here
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());

    int count = 0, first = intervals[0][0], second = intervals[0][1];
    for (int i = 1; i < n; i++)
    {
        vector<int> interval = intervals[i];
        if (interval[0] < second)
        {
            second = min(interval[1], second);
            count++;
        }
        else
        {
            first = interval[0], second = interval[1];
        }
    }

    return count;
}

int main()
{

    return 0;
}