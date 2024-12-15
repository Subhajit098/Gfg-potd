#include <bits/stdc++.h>
using namespace std;

// Method 1 using O(n) space
int isValid(string str)
{
    // code here
    int n = str.size();
    vector<string> store;
    int i = 0;
    while (i < n)
    {
        string s;
        while (str[i] != '.' && i < n)
        {
            s.push_back(str[i]);
            i++;
        }
        store.push_back(s);
        if (i < n)
            i++;
    }

    for (int i = 0; i < store.size(); i++)
    {
        int j = 0;
        if (store[i][0] == '0' && store[i].size() > 1)
            return false;

        int num = stoi(store[i]);
        if (!(num >= 0 && num <= 255))
            return false;
    }

    return true;
}

// Method 2 using O(1) space
int isValid(string str)
{
    // code here
    int n = str.size();
    int i = 0;
    while (i < n)
    {
        if (str[i] == '0' && i + 1 < n && str[i + 1] != '.')
            return false;
        int num = 0;
        while (str[i] != '.' && i < n)
        {
            num = (num * 10) + (str[i] - '0');
            i++;
        }

        if (!(num >= 0 && num <= 255))
            return false;

        if (i < n)
            i++;
    }

    return true;
}


int main()
{

    return 0;
}