#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int j = 0; j < i * 2 - 1; j++)
        {
            cout << " ";
        }
        if (i != 0)
            cout << '*';
        cout << '\n';
    }
    for (int i = 0; i < n * 2 - 1; i++)
    {
        cout << '*';
    }
    cout << '\n';

    return 0;
}