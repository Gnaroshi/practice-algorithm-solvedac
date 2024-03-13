// problem: 강력한 비밀번호
// id: 16944
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
    bool chk[4] = {0};
    for (auto i : s)
    {
        if (!chk[1] || !chk[2])
        {
            if (isalpha(i))
            {
                if (isupper(i))
                    chk[2] = true;
                else
                    chk[1] = true;
            }
        }
        if (!chk[0] || !chk[3])
        {
            if (!isalpha(i))
            {
                if (isdigit(i))
                    chk[0] = true;
                else
                    chk[3] = true;
            }
        }
    }
    int cnt = 4;
    for (int i = 0; i < 4; i++)
        cnt -= chk[i];
    if (s.length() < 6)
        cnt = max(cnt, int(6 - s.length()));
    cout << cnt;

    return 0;
}