#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int temp = 0, count = 0;

    for (int i = 0, j = 0; j < s.size(); j++)
    {
        if (s[i] == s[j])
        {
            temp++;
        }
        else
        {
            if (temp > count)
                count = temp;
            i = j;
            j--;
            temp = 0;
        }
    }
    if (temp > count)
        count = temp;

    cout << count;
}