#include <bits/stdc++.h>
using namespace std;

int kthSmallest(vector<int> &arr, int k)
{
    // code here
    int n = arr.size();
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        while (pq.size() > k)
            pq.pop();
        pq.push(arr[i]);
    }
    if (pq.size() > k)
        pq.pop();
    return pq.top();
}

int main()
{

    return 0;
}