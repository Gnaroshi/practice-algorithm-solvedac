// problem: Black and White
// id: 18156
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v(n);
    for (auto &i : v)
        cin >> i;
    if (n == 2)
    {
        if (v[0][0] != v[0][1] && v[0][0] != v[1][0] && v[0][0] == v[1][1])
            cout << 1;
        else
            cout << 0;
        return 0;
    }
    int cnt[2];
    for (auto i : v)
    {
        cnt[0] = cnt[1] = 0;
        cnt[(i[0] == 'W')]++;
        cnt[(i[1] == 'W')]++;
        for (int j = 2; j < n; j++)
        {
            cnt[(i[j] == 'W')]++;
            if (i[j] == i[j - 1] && i[j] == i[j - 2])
            {
                cout << 0;
                return 0;
            }
        }
        if (cnt[0] != cnt[1])
        {
            cout << 0;
            return 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cnt[0] = cnt[1] = 0;
        cnt[(v[0][i] == 'W')]++;
        cnt[(v[1][i] == 'W')]++;
        for (int j = 2; j < n; j++)
        {
            cnt[(v[j][i] == 'W')]++;
            if (v[j][i] == v[j - 1][i] && v[j][i] == v[j - 2][i])
            {
                cout << 0;
                return 0;
            }
        }
        if (cnt[0] != cnt[1])
        {
            cout << 0;
            return 0;
        }
    }
    cout << 1;

    return 0;
}