#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x[3];
    int y[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> x[i] >> y[i];
    }
    if (x[0] == x[1])
        cout << x[2];
    else if (x[1] == x[2])
        cout << x[0];
    else
        cout << x[1];
    cout << ' ';

    if (y[0] == y[1])
        cout << y[2];
    else if (y[1] == y[2])
        cout << y[0];
    else
        cout << y[1];
    cout << '\n';

    return 0;
}