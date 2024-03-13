// problem: 경기 결과
// id: 5523
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a = 0, b = 0;
    int at, bt, c;
    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> at >> bt;
        c = at - bt;
        if (c > 0)
            a++;
        else if (c < 0)
            b++;
    }
    cout << a << ' ' << b;

    return 0;
}