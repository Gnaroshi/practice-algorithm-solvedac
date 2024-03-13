// problem: 생장점
// id: 1703
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;

    while (true)
    {
        cin >> a;
        if (a == 0)
            break;
        int ans = 0;
        int s, p;
        cin >> s >> p;
        ans += s - p;
        for (int i = 1; i < a; i++)
        {
            cin >> s >> p;
            ans *= s;
            ans -= p;
        }
        cout << ans << '\n';
    }

    return 0;
}