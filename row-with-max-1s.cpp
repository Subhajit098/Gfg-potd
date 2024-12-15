#include <bits/stdc++.h>
using namespace std;

// method -1
int rowWithMax1s(vector<vector<int>> &arr)
{
    int ans = 0, n = arr.size();
    int m = arr[0].size();
    int rows_1 = -1;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        if (sum > ans)
        {
            ans = sum;
            rows_1 = i;
        }
    }
}

// method -2
int rowWithMax1s(vector<vector<int>> &arr)
{
    int row = arr.size(), col = arr[0].size();
    for (int c = 0; c < col; c++)
    {
        for (int r = 0; r < row; r++)
        {
            if (arr[r][c] == 1)
                return r;
        }
    }

    return -1;
}

int main()
{

    return 0;
}