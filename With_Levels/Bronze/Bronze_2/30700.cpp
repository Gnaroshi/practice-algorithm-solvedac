// problem: KOREA 문자열 만들기
// id: 30700
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cur = 0, ans = 0;
    string s, kr = "KOREA";
    cin >> s;
    for (auto i : s)
    {
        if (i == kr[cur % 5])
        {
            ans++;
            cur++;
        }
    }
    cout << ans;

    return 0;
}