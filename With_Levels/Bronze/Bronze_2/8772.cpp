// problem: Szyfr Cezara
// id: 8772
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
        int n, iter, dif;
        char c;
        string s;
        cin >> n >> s >> c;
        iter = s.length();
        dif = (s[0] - c);
        for (int i = 0; i < iter; i++)
        {
            if (s[i] - char(dif) < 'a')
                cout << char(s[i] - char(dif) + 26);
            else if (s[i] - char(dif) > 'z')
                cout << char(s[i] - char(dif) - 26);
            else
                cout << char(s[i] - dif);
        }
        cout << '\n';
    }

    return 0;
}