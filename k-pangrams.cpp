#include <bits/stdc++.h>
using namespace std;

bool kPangram(string str, int k)
{
    // code here
    int n = str.size();

    unordered_map<char, int> mp;
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        if (int(str[i]) >= 97 && int(str[i]) <= 122)
        {
            mp[str[i]]++, l++;
        }
    }

    if (l < 26)
        return false;

    return (mp.size() + k >= 26);
}