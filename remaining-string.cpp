#include <bits/stdc++.h>
using namespace std;

string printString(string s, char ch, int count)
{
    // Your code goes here
    int i = 0, n = s.size();
    while (i < n)
    {
        if (s[i] == ch)
        {
            count--;
            if (count == 0)
                break;
        }
        i++;
    }

    if (count != 0 || i + 1 == n)
        return "";

    return s.substr(i + 1, n - i + 1);
}

int main()
{

    return 0;
}