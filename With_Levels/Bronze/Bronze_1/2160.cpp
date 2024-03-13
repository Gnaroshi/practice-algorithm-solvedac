// problem: 그림 비교
// id: 2160
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mn = 0x3f3f3f3f, a, b;
    cin >> n;
    string s;
    vector<vector<string>> v(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> s;
            v[i].emplace_back(s);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int cnt = 0;
            for (int k = 0; k < 5; k++)
                for (int l = 0; l < 7; l++)
                    cnt += (v[i][k][l] != v[j][k][l]);
            if (cnt < mn)
            {
                mn = cnt;
                a = i;
                b = j;
            }
        }
    }
    cout << a + 1 << ' ' << b + 1;

    return 0;
}