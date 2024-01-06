#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> input;
    int result = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        cin >> temp;
        input.emplace_back(temp);
    }

    for (int i = 0; i < input.size(); i++)
    {
        result ^= (i + 1) ^ input[i];
    }

    cout << result;
}