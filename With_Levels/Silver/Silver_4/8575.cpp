// problem: Śpiew
// id: 8575
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;
    int iter = s.length();
    int cnt = 0;
    int zc = 0;
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == 'Z')
        {
            zc++;
        }
        else
        {
            if (zc % 3 != 0)
            {
                cnt += 1;
                zc -= zc % 3;
            }
            cnt += zc / 3;
            zc = 0;
        }
    }
    if (zc % 3 != 0)
    {
        cnt += 1;
        zc -= zc % 3;
    }
    cnt += zc / 3;
    cout << cnt;

    return 0;
}