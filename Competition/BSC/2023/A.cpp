// problem: A번 - 브실이와 친구가 되고 싶어 🤸‍♀️
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, k, x, cnt = 0;
    cin >> a >> b >> k >> x;

    for (int i = a; i <= b; i++)
    {
        if (abs(i - k) <= x)
            cnt++;
    }
    if (cnt == 0)
        cout << "IMPOSSIBLE";
    else
        cout << cnt;

    return 0;
}