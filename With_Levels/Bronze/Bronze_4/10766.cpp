#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, d;
    cin >> m >> d;
    if (m == 2 && d == 18)
        cout << "Special\n";
    else
    {
        if (d > 18 && m >= 2 || m > 2)
            cout << "After\n";
        else
            cout << "Before\n";
    }
    return 0;
}