#include <bits/stdc++.h>
using namespace std;

// First method using O(n) extra space and using prefix array for storing the prefix max
int countBuildings(vector<int> &height)
{
    // code here
    int n = height.size();
    int count = n;

    vector<int> shadow(n, 0);
    shadow[0] = height[0];

    for (int i = 1; i < n; i++)
    {
        shadow[i] = max(shadow[i - 1], height[i]);
    }

    for (int i = 1; i < n; i++)
    {
        if (height[i] <= shadow[i - 1])
            count--;
    }

    return count;
}

// 2nd method using O(1) space and modifying the prefix array
int countBuildings(vector<int> &height)
{
    // code here
    int n = height.size();
    int count = 0;
    if (n > 0)
        count = 1;

    // prefix max for the array
    for (int i = 1; i < n; i++)
    {
        height[i] = max(height[i - 1], height[i]);
    }

    for (int i = 1; i < n; i++)
    {
        if (height[i] > height[i - 1])
            count++;
    }

    return count;
}

int main()
{

    return 0;
}