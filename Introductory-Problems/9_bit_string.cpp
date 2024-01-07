#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD % (ll)(1e9 + 7)

int main()
{
    ll n, result = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        result = result * 2 MOD;
    }
    cout << result;
}