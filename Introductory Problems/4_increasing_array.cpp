#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long count = 0;
    vector<long long> input;

    cin >> n;
    

    while (n > 0)
    {
        long long temp;
        cin >> temp;
        input.emplace_back(temp);
        n--;
    }

    for (int i = 0; i < input.size() - 1; i++)
    {
        if (input[i] > input[i + 1])
        {
            count += input[i] - input[i + 1];
            input[i + 1] += input[i] - input[i + 1];
        }
    }
    cout << count << endl;
}