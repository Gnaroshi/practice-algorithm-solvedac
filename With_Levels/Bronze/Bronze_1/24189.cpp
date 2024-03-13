// problem: Hockeymatchen
// id: 24189
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a(3), b(3);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;

    if (a[2] == -1)
    {
        if (b[0] != -1 && a[1] != -1)
            a[2] = b[0] + a[1];
    }
    else if (a[2] == 0)
        b[0] = a[1] = 0;
    if (b[2] == -1)
    {
        if (a[0] != -1 && b[1] != -1)
            b[2] = a[0] + b[1];
    }
    else if (b[2] == 0)
        a[0] = b[1] = 0;

    if (a[1] == -1)
    {
        if (a[2] != -1 && b[0] != -1)
            a[1] = a[2] - b[0];
    }
    if (b[1] == -1)
    {
        if (b[2] != -1 && a[0] != -1)
            b[1] = b[2] - a[0];
    }
    if (a[0] == -1)
    {
        if (b[2] != -1 && b[1] != -1)
            a[0] = b[2] - b[1];
    }
    if (b[0] == -1)
    {
        if (a[2] != -1 && a[1] != -1)
            b[0] = a[2] - a[1];
    }
    for (int i = 0; i < 3; i++)
        cout << a[i] << ' ';
    cout << '\n';
    for (int i = 0; i < 3; i++)
        cout << b[i] << ' ';

    return 0;
}