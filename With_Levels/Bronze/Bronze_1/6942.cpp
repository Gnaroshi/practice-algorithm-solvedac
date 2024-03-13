// problem: 9966
// id: 6942
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool fn(int n)
{
    int t = n;
    while (t > 0)
    {
        if (t % 10 == 2 || t % 10 == 3 || t % 10 == 4 || t % 10 == 5 || t % 10 == 7)
            return false;
        t /= 10;
    }
    string s = to_string(n), ts = s;
    reverse(ts.begin(), ts.end());
    int sl = s.length(), iter = sl / 2;
    if (to_string(stoi(ts)).length() != sl)
        return false;
    for (auto &i : s)
    {
        if (i == '6')
            i = '9';
        else if (i == '9')
            i = '6';
    }
    return ts == s;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, ans = 0;
    cin >> n >> m;
    for (int i = n; i <= m; i++)
        ans += fn(i);
    cout << ans;

    return 0;
}