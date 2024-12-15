#include <bits/stdc++.h>
using namespace std;

static bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
        return a.second < b.second;

    return a.first < b.first;
}

int maxMeetings(int n, int start[], int end[])
{
    // Your code here
    vector<pair<int, int>> start_end;
    for (int i = 0; i < n; i++)
    {
        start_end.push_back(make_pair(start[i], end[i]));
    }

    // sorting on the basis of end time. As smaller the end time
    // more number of meetings can be held
    sort(start_end.begin(), start_end.end(), cmp);

    int count = 1;
    int end_time = start_end[0].second;
    for (int i = 1; i < n; i++)
    {
        if (end_time < start_end[i].first)
        {
            count++;
            end_time = start_end[i].second;
        }
    }

    return count;
}

int main()
{

    return 0;
}
