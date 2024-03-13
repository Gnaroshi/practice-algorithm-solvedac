// problem: Icon Scaling
// id: 6765
// time taken:
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
        for (int j = 0; j < n; j++)
            cout << '*';
        for (int j = 0; j < n; j++)
            cout << 'x';
        for (int j = 0; j < n; j++)
            cout << '*';
        cout << '\n';
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << ' ';
        for (int j = 0; j < n; j++)
            cout << 'x';
        for (int j = 0; j < n; j++)
            cout << 'x';
        cout << '\n';
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << '*';
        for (int j = 0; j < n; j++)
            cout << ' ';
        for (int j = 0; j < n; j++)
            cout << '*';
        cout << '\n';
    }

    return 0;
}