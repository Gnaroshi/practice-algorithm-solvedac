// problem: 문자열 탑 쌓기
// id: 25643
// time taken:
#include <bits/stdc++.h>
using namespace std;
int n, m;

bool fn(string a, string b)
{
    bool chk = true;
    for (int i = 1; i <= m; i++)
    {
        if (a.substr(0, i) == b.substr(m - i))
        {
            chk = false;
            break;
        }
    }
    if (!chk)
        return chk;
    for (int i = 1; i <= m; i++)
    {
        if (a.substr(m - i) == b.substr(0, i))
        {
            chk = false;
            break;
        }
    }
    return chk;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    vector<string> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 1; i < n; i++)
    {
        if (fn(v[i], v[i - 1]))
        {
            cout << 0;
            return 0;
        }
    }
    cout << 1;

    return 0;
}