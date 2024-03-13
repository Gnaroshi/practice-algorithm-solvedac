// problem: Enigma
// id: 16446
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, c;
    cin >> s >> c;
    int iter = s.length(), ic = c.length(), ans = 0;
    iter -= ic - 1;
    bool chk;
    for (int i = 0; i < iter; i++)
    {
        chk = true;
        for (int j = 0; j < ic; j++)
        {
            if (s[i + j] == c[j])
            {
                chk = false;
                break;
            }
        }
        if (chk)
            ans++;
    }
    cout << ans;

    return 0;
}