#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, s;
    cin >> t >> s;

    if (12 <= t && t <= 16)
    {
        if (s == 1)
            cout << 280;
        else
            cout << 320;
    }
    else
        cout << 280;

    return 0;
}