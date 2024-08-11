#include <bits/stdc++.h>
using namespace std;

struct Job
{
    int id;     // Job Id
    int dead;   // Deadline of job
    int profit; // Profit if job is over before or on deadline
};

static bool cmp(Job a, Job b)
{
    return a.profit > b.profit;
}

// Function to find the maximum profit and the number of jobs done.
// vector<int> JobScheduling(Job arr[], int n)
// {
//     // your code here
//     sort(arr, arr + n, cmp);

//     int max_deadline = 1;

//     for (int i = 0; i < n; i++)
//     {
//         max_deadline = max(max_deadline, arr[i].dead);
//     }

//     int count = 0, profit = 0, jobs = 0;

//     unordered_map<int, int> mp;

//     for (int i = 0; i < n && count <= max_deadline; i++)
//     {
//         if (arr[i].dead >= count)
//         {
//             if (mp.find(arr[i].dead) == mp.end())
//             {
//                 mp[arr[i].dead] = arr[i].dead - 1;
//                 count += 1;
//                 profit += arr[i].profit;
//                 jobs++;
//             }
//             else if (mp[arr[i].dead] > 0)
//             {
//                 mp[arr[i].dead]--;
//                 count += 1;
//                 profit += arr[i].profit;
//                 jobs++;
//             }
//         }
//     }

//     vector<int> ans;
//     ans.push_back(jobs);
//     ans.push_back(profit);

//     return ans;
// }

vector<int> JobScheduling(Job arr[], int n)
{
    sort(arr, arr + n, cmp);

    int max_deadline = 1;

    for (int i = 0; i < n; i++)
    {
        max_deadline = max(max_deadline, arr[i].dead);
    }

    vector<bool> slots(max_deadline + 1, false);
    int m = max_deadline;
    int profit = 0, jobs = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = arr[i].dead; j >0; j--)
        {
            if (!slots[j])
            {
                slots[j] = true;
                profit += arr[i].profit;
                jobs++;
                break;
            }
        }
    }

    return {jobs, profit};
}

int main()
{

    return 0;
}