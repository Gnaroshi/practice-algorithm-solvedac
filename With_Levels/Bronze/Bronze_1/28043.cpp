// problem: Daily Trips
// id: 28043
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, h, w;
    cin >> n >> h >> w;
    char a, b;
    while (n--)
    {
        cin >> a >> b;
        if (a == 'Y' || !w)
            cout << 'Y', h--, w++;
        else
            cout << 'N';
        cout << ' ';
        if (b == 'Y' || !h)
            cout << 'Y', w--, h++;
        else
            cout << 'N';
        cout << '\n';
    }

    return 0;
}