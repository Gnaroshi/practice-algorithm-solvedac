// problem: Guessing Game I
// id: 6997
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string a, b;
        cin >> a >> b;
        int cc = 0, sc = 0;
        int cd[10] = {0}, sd[10] = {0};
        for (int i = 0; i < 4; i++)
        {
            cd[a[i] - '0']++;
            sd[b[i] - '0']++;
            if (a[i] == b[i])
                cc++, cd[a[i] - '0']--, sd[b[i] - '0']--;
        }
        for (int i = 0; i < 10; i++)
            sc += min(cd[i], sd[i]);
        cout << "For secret = " << a << " and guess = " << b << ", " << cc << " circles and " << sc << " squares will light up.\n";
    }

    return 0;
}