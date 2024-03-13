// problem: Hide those Letters
// id: 9949
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char a, b, c, d;
    for (int tcc = 1;; tcc++)
    {
        cin >> a >> b;
        if (a == b && a == '#')
            break;
        if (a == tolower(a))
            c = toupper(a);
        if (b == tolower(b))
            d = toupper(b);

        cout << "Case " << tcc << '\n';
        int n, iter;
        cin >> n;
        cin.ignore();
        string s, ans;
        for (int j = 0; j < n; j++)
        {
            ans = "";
            getline(cin, s);
            iter = s.length();
            for (int k = 0; k < iter; k++)
            {
                if (s[k] == a || s[k] == b || s[k] == c || s[k] == d)
                    ans.push_back('_');
                else
                    ans.push_back(s[k]);
            }
            cout << ans << '\n';
        }
        cout << '\n';
    }
    return 0;
}