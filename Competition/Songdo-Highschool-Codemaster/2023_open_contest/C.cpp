// problem: C번 - 정보 선생님의 야망
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int cnt[10] = {0};

    while (n--)
    {
        int st[5], loc = 0;
        for (int i = 0; i < 5; i++)
            cin >> st[i];
        for (int i = 0; i < 5; i++)
        {
            for (int j = i + 1; j < 5; j++)
            {
                if (st[i] && st[j])
                    cnt[loc]++;
                loc++;
            }
        }
    }

    int mx = -1, mxloc;
    for (int i = 0; i < 10; i++)
    {
        if (mx < cnt[i])
        {
            mx = cnt[i];
            mxloc = i;
        }
    }

    string v[10];
    int loc = 0;
    for (int i = 0; i < 10; i++)
        v[i] = "00000";

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            v[loc][i] = '1';
            v[loc][j] = '1';
            loc++;
        }
    }
    cout << mx << '\n';
    for (int i = 0; i < 5; i++)
        cout << v[mxloc][i] << ' ';

    return 0;
}