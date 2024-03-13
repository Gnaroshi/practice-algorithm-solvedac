#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int j = 0; j < i * 2 - 1; j++)
        {
            cout << " ";
        }
        if (i != 0)
            cout << "*";
        cout << '\n';
    }

    return 0;
}