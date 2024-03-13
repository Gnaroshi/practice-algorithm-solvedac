// problem: 첨탑 밀어서 부수기
// id: 28014
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, bef = -1, cur, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> cur;
        if (cur >= bef)
            cnt++;
        bef = cur;
    }
    cout << cnt;

    return 0;
}