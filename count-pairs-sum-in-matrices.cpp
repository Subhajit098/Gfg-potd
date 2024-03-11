#include <bits/stdc++.h>
using namespace std;

// Brute force
int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
{
    // Your code goes here
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            st.insert(mat2[i][j]);
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (st.find(x - mat1[i][j]) != st.end())
                count++;
        }
    }

    return count;
}


// Optimized approach 
int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
{
    int row1 = 0, col1 = 0, row2 = n - 1, col2 = n - 1, count = 0;
    while (row1 < n && row2 >= 0)
    {
        int target = mat1[row1][col1] + mat2[row2][col2];
        if (target == x)
        {
            count++;
            col1++;
            col2--;
        }

        else if (target > x)
            col2--;
        else
            col1++;

        if (col1 == n)
        {
            row1++;
            col1 = 0;
        }

        if (col2 == -1)
        {
            row2--;
            col2 = n - 1;
        }
    }

    return count;
}