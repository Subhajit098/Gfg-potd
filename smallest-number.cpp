#include <bits/stdc++.h>
using namespace std;

string smallestNumber(int s, int d)
{
    // code here
    if (s > 9 * d)
    {
        return "-1";
    }

    string ans(d, '0');

    for (int i = d - 1; i > 0; i--)
    {
        if (s > 9)
        {
            ans[i] = '9';
            s -= 9;
        }
        else
        {
            ans[i] = '0' + s - 1;
            s = 1;
        }
    }

    ans[0] = s + '0';

    return ans;
}

int main()
{

    return 0;
}