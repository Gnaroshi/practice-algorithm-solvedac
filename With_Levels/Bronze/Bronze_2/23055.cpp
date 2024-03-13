// problem: 공사장 표지판
// id: 23055
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, iter;
    cin >> n;
    if (n == 1)
    {
        cout << '*';
        return 0;
    }
    for (int j = 0; j < n; j++)
        cout << '*';
    cout << '\n';

    iter = n / 2;
    for (int i = 0; i < iter - 1; i++)
    {
        cout << '*';
        for (int j = 0; j < i; j++)
            cout << ' ';
        cout << '*';
        for (int j = 0; j < n - (i + 2) * 2; j++)
            cout << ' ';
        cout << '*';
        for (int j = 0; j < i; j++)
            cout << ' ';
        cout << "*\n";
    }
    if (n % 2)
    {
        cout << '*';
        for (int i = 0; i < iter - 1; i++)
            cout << ' ';
        cout << '*';
        for (int i = 0; i < iter - 1; i++)
            cout << ' ';
        cout << "*\n";
    }
    for (int i = 0; i < iter - 1; i++)
    {
        cout << '*';
        for (int j = 0; j < iter - i - 2; j++)
            cout << ' ';
        cout << '*';
        for (int j = 0; j < n - (2 * (iter - i)); j++)
            cout << ' ';
        cout << '*';
        for (int j = 0; j < iter - i - 2; j++)
            cout << ' ';
        cout << "*\n";
    }

    for (int j = 0; j < n; j++)
        cout << '*';
    cout << '\n';

    return 0;
}