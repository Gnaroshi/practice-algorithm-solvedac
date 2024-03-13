// problem: BELA
// id: 11922
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0;
    char c, f;
    cin >> n >> c;
    for (int i = 0; i < 4 * n; i++)
    {
        string s;
        cin >> s;
        f = s[0];
        if (s[1] == c)
        {

            if (f == 'J')
                ans += 20;
            else if (f == 'T')
                ans += 10;
            else if (f == '9')
                ans += 14;
        }
        else
        {

            if (f == 'J')
                ans += 2;
            else if (f == 'T')
                ans += 10;
        }
        if (f == 'A')
            ans += 11;
        else if (f == 'K')
            ans += 4;
        else if (f == 'Q')
            ans += 3;
    }
    cout << ans;

    return 0;
}