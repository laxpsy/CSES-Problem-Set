#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    for (; n != 1;)
    {
        cout << n << " ";
        if ((n & 1) == 1)
            n = 3 * n + 1;
        else
            n /= 2;
    }
    cout << "1";
}