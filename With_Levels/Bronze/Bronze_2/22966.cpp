// problem: 가장 쉬운 문제를 찾는 문제
// id: 22966
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx = 0x3f3f3f3f, t;
    string ans, s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> t;
        if (mx > t)
        {
            ans = s;
            mx = t;
        }
    }
    cout << ans;

    return 0;
}