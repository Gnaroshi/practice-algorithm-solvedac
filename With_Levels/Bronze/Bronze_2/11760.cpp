// problem: Mastering Mastermind
// id: 11760
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r, s;
    r = s = 0;
    string a, b;
    cin >> n >> a >> b;
    int ia = a.length();
    int ac[26] = {0};
    int bc[26] = {0};

    for (int i = 0; i < ia; i++)
        ac[a[i] - 'A']++;
    for (int i = 0; i < ia; i++)
        bc[b[i] - 'A']++;

    for (int i = 0; i < ia; i++)
    {
        if (a[i] == b[i])
        {
            r++;
            ac[a[i] - 'A']--;
            bc[b[i] - 'A']--;
        }
    }
    for (int i = 0; i < 26; i++)
        s += min(ac[i], bc[i]);
    cout << r << ' ' << s;

    return 0;
}