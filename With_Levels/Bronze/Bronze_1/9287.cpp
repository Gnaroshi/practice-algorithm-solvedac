// problem: Jenga
// id: 9287
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Case " << tcc << ": ";
        int h;
        cin >> h;
        bool chk = true;
        string s;
        for (int i = 0; i < h; i++)
        {
            cin >> s;
            if (s[1] == '1' || (s[0] == s[2] && s[0] == '1'))
                ;
            else
                chk = false;
        }
        cout << (chk ? "Standing\n" : "Fallen\n");
    }

    return 0;
}