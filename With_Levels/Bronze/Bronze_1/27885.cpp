// problem: 가희와 열리지 않는 건널목
// id: 27885
// time taken:
#include <bits/stdc++.h>
using namespace std;
const int SZ = 86401;
int c, h, ans;
bool chk[SZ];

void fn(string s)
{
    int h = ((s[0] - '0') * 10 + s[1] - '0') * 3600 + ((s[3] - '0') * 10 + s[4] - '0') * 60 + ((s[6] - '0') * 10 + s[7] - '0');
    // cout << "h: " << h << '\n';
    for (int i = h; i < h + 40; i++)
        chk[i] = 0;
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> c >> h;
    fill(chk, chk + SZ, 1);
    string s;
    for (int i = 0; i < c; i++)
    {
        cin >> s;
        fn(s);
    }
    for (int i = 0; i < h; i++)
    {
        cin >> s;
        fn(s);
    }

    for (int i = 0; i < SZ - 1; i++)
    {
        if (chk[i])
            ans++;
    }
    cout << ans;

    return 0;
}