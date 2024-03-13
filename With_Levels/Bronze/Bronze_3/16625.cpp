// problem: Das Blinkenlights
// id: 16625
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, q, s;
    cin >> p >> q >> s;
    bool chk = false;
    for (int i = 1; i <= s; i++)
    {
        if (i % p + i % q == 0)
        {
            chk = true;
            break;
        }
    }
    if (chk)
        cout << "yes";
    else
        cout << "no";

    return 0;
}