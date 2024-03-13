// problem: A번 - Previous Level
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == 300)
            cout << 1;
        else if (t >= 275)
            cout << 2;
        else if (t >= 250)
            cout << 3;
        else
            cout << 4;
        if (i < n - 1)
            cout << ' ';
    }

    return 0;
}