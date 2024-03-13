// problem: 미역은 식물 아닌데요
// id: 30502
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, c, mn = 0, mx = 0;
    cin >> n >> m;
    char b;
    vector<string> v(n + 1);
    fill(v.begin(), v.end(), "00");
    while (m--)
    {
        cin >> a >> b >> c;
        if (b == 'P')
        {
            if (c)
                v[a][0] = '1';
            else
                v[a][0] = '2';
        }
        else
        {
            if (c)
                v[a][1] = '1';
            else
                v[a][1] = '2';
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == "00")
            mx++;
        else if (v[i] == "10")
            mx++;
        else if (v[i] == "02")
            mx++;
        else if (v[i] == "12")
            mx++, mn++;
    }
    // 00  10  02  12
    cout << mn << ' ' << mx;

    return 0;
}