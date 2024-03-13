// problem: #include <Google I/O.h>
// id: 12174
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
        cout << "Case #" << tcc << ": ";
        int b, m = 128, a = 0;
        string s, o;
        cin >> b >> s;
        for (int i = 0; i < b; i++)
        {
            o = s.substr(i * 8, 8);
            for (auto j : o)
            {
                if (j == 'I')
                    a += m;
                m /= 2;
            }
            cout << char(a);
            a = 0, m = 128;
        }
        cout << '\n';
    }

    return 0;
}