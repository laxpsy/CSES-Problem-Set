#include <bits/stdc++.h>
using namespace std;

#define ll long long

void spiral(ll row, ll col)
{
    ll result = 0;

    if (col - row > 0)
    {
        result += (col & 1 == 1) ? col * col : (col - 1) * (col - 1) + 1;
        bool decrease = !(col & 1 == 1);
        result -= (decrease) ? -(row - 1) : row - 1;
    }
    else
    {
        result += (row & 1 == 1) ? (row - 1) * (row - 1) + 1 : row * row;
        bool decrease = !(row & 1 == 1);
        result -= (decrease) ? (col - 1) : -(col - 1);
    }
    cout << result << endl;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int
            ll temp1,
            temp2;
        cin >> temp1;
        cin >> temp2;
        spiral(temp1, temp2);
    }
}