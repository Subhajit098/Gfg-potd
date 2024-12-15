#include <bits/stdc++.h>
using namespace std;

string reverseWords(string str)
{
    // code here
    int n = str.size();
    int i = 0;
    while (i < n)
    {

        int j = i;
        while (j < n && str[j] != '.')
            j++;

        reverse(str.begin() + i, str.begin() + j);
        i = j + 1;
    }

    reverse(str.begin(), str.end());

    return str;
}

int main()
{

    return 0;
}