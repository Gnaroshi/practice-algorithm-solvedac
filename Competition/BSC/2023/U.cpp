// problem: U번 - 택배가 안와잉
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{

    int h1, m1, h2, m2, n, t, d = 0, c;
    string s;
    getline(cin, s);
    cin >> n >> t;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == ':')
            s[i] = ' ';
    stringstream st;
    st.str(s);
    st >> h1 >> m1 >> h2 >> m2;
    m1 += h1 * 60;
    m2 += h2 * 60;
    c = m1;
    while (true)
    {
        c += t;
        if (c >= m2)
        {
            c = m1;
            d++;
            continue;
        }
        n--;
        if (n == -1)
        {
            printf("%d\n%02d:%02d", d, c / 60, c % 60);
            break;
        }
    }

    return 0;
}