// problem: 트럭 주차
// id: 2979
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, ans = 0;
    int chk[101] = {0};
    cin >> a >> b >> c;
    for (int i = 0; i < 3; i++)
    {
        int s, e;
        cin >> s >> e;
        for (int j = s; j < e; j++)
            chk[j]++;
    }
    for (int i = 1; i < 101; i++)
    {
        if (chk[i] == 1)
            ans += a;
        else if (chk[i] == 2)
            ans += b * 2;
        else if (chk[i] == 3)
            ans += c * 3;
    }
    cout << ans;

    return 0;
}
