// problem: Торговый центр
// id: 28648
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, mn = 0x3f3f3f3f;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        mn = min(a + b, mn);
    }
    cout << mn;

    return 0;
}