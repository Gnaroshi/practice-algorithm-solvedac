// problem: Vowel Count
// id: 26314
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
        string s;
        cin >> s;
        int iter = s.length();
        int ans = 0;
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                ans++;
        }
        cout << s << '\n'
             << ((ans > iter - ans) ? 1 : 0) << '\n';
    }

    return 0;
}