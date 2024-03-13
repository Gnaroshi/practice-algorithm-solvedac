// problem: Double Password
// id: 24606
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0, ans = 1;
    for (int i = 0; i < 4; i++)
        if (s1[i] != s2[i])
            cnt++;
    for (int i = 0; i < cnt; i++)
        ans *= 2;
    cout << ans;

    return 0;
}