// problem: Speaking in Tongues (Small)
// id: 12400
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    // 'y', 'h', 'e', 's', 'o', 'c', 'v', 'x', 'd', 'u', 'i', 'g', 'l', 'b', 'k', 'r', 'z', 't', 'n', 'w', 'j', 'p', 'f', 'm', 'a', 'q'
    int tc;
    cin >> tc;
    cin.ignore();
    char tog[26] = {'y', 'h', 'e', 's', 'o', 'c', 'v', 'x', 'd', 'u', 'i', 'g', 'l', 'b', 'k', 'r', 'z', 't', 'n', 'w', 'j', 'p', 'f', 'm', 'a', 'q'};
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        string s;
        getline(cin, s);
        int iter = s.length();
        for (int i = 0; i < iter; i++)
        {
            if (isalpha(s[i]))
            {
                s[i] = tog[s[i] - 'a'];
            }
        }
        cout << "Case #" << tcc << ": " << s << '\n';
    }

    // int tc;
    // cin >> tc;
    // cin.ignore();
    // char c[26] = {0};
    // for (int tcc = 1; tcc <= tc; tcc++)
    // {
    //     string a, b;
    //     getline(cin, a);
    //     getline(cin, b);
    //     int iter = a.length();
    //     for (int i = 0; i < iter; i++)
    //     {
    //         c[a[i] - 'a'] = b[i];
    //     }
    // }
    // int cnt = 0;
    // for (int i = 0; i < 26; i++)
    // {
    //     if (c[i] != 0)
    //     {
    //         cout << "\'" << c[i] << "\', ";
    //         cnt++;
    //     }
    //     else
    //         cout << "\'0\', ";
    // }
    // cout << '\n';
    // cout << cnt << '\n';

    return 0;
}
// 3
// our language is impossible to understand
// ejp mysljylc kd kxveddknmc re jsicpdrysi
// there are twenty six factorial possibilities
// rbcpc ypc rtcsra dkh wyfrepkym veddknkmkrkcd
// so it is okay if you want to just give up
// de kr kd eoya kw aej tysr re ujdr lkgc jv