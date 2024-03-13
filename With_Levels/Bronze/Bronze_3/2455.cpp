#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int mx = 0;
    int cur = 0;
    for (int i = 0; i < 4; i++)
    {
        int a, b;
        cin >> a >> b;
        cur += b;
        cur -= a;
        if (cur > mx)
            mx = cur;
    }
    cout << mx << '\n';

    return 0;
}