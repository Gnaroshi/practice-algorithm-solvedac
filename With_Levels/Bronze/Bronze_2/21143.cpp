// problem: Magic Trick
// id: 21143
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int chk[26] = {0};
    bool g = false;
    cin >> s;
    int iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        if (chk[s[i] - 'a'])
        {
            g = true;
            break;
        }
        else
            chk[s[i] - 'a'] = 1;
    }
    cout << !g;

    return 0;
}