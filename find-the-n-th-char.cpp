#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE METHOD
char nthCharacter(string s, int r, int n)
{
    // code here
    string ans = s;
    while (r--)
    {
        string str = "";
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] == '1')
            {
                str += "10";
            }
            else
            {
                str += "01";
            }
        }
        ans = str;
    }

    char c;
    for (int i = 0; i < ans.size(); i++)
    {
        if (i == n)
        {
            c = ans[i];
            break;
        }
    }
    return c;
}

// OPTIMIZED APPROACH
char nthCharacter(string s, int r, int n)
{
    // code here
    string ans = s;
    while (r--)
    {
        string temp = "";
        for (int i = 0; i <= n; i++)
        {
            if (ans[i] == '0')
                temp += "01";
            else
                temp += "10";
        }
        ans = temp;
    }
    return ans[n];
}