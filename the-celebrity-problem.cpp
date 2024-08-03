#include <bits/stdc++.h>
using namespace std;

// Method 1 , SC : O(2*n)
int celebrity(vector<vector<int>> &mat)
{
    // code here
    int n = mat.size();
    vector<int> knows_me(n, 0), i_know(n, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j])
            {
                knows_me[j]++;
                i_know[i]++;
            }
        }
    }

    int celebrity = -1;
    for (int i = 0; i < n; i++)
    {
        if (knows_me[i] == n - 1 && i_know[i] == 0)
            celebrity = i;
    }

    return celebrity;
}

// Method 2 , SC : O(1)
int celebrity(vector<vector<int>> &mat)
{
    // code here
    int n = mat.size();
    int celebrity = -1;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (mat[i][j] == 0 && mat[j][i] == 1)
                {
                    sum += 0;
                }
                else
                    sum += 1;
            }
        }

        if (sum == 0)
            celebrity = i;
    }

    return celebrity;
}

int main()
{

    return 0;
}
