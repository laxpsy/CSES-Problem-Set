#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << n;
    }
    else if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << endl;
    }
    else if (n == 4)
    {
        cout << "2 4 1 3" << endl;
    }
    else if (n == 5)
    {
        cout << "2 4 1 3 5" << endl;
    }
    else
    {
        vector<int> temp;
        if (n & 1)
        {
            for (int i = n; i > n / 2; i--)
            {
                temp.emplace_back(i);
                temp.emplace_back(i - (n / 2 + 1));
            }
            temp.pop_back();
        }
        else
        {
            for (int i = n; i >= n / 2; i--)
            {
                temp.emplace_back(i);
                temp.emplace_back(i - n / 2);
            }
            temp.pop_back();
        }
        for (int i : temp)
        {
            cout << i << " ";
        }
    }
}