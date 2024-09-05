#include <bits/stdc++.h>
using namespace std;

int missingNumber(int n, vector<int> &arr)
{

    // Your code goes here
    int sum = 0;
    for (int i : arr)
        sum += i;

    int S = n * (n + 1) / 2;

    return S - sum;
}

int main()
{

    return 0;
}