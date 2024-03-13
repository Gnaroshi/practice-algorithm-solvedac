// problem: C번 - 브실혜성
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{

    int y, m, d, n;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == '-')
            s[i] = ' ';
    stringstream st;
    st.str(s);
    st >> y >> m >> d;
    cin >> n;
    y += n / 360;
    d += n % 360;
    m += d / 30;
    d %= 30;
    if (d == 0)
    {
        d = 30;
        m--;
    }
    y += m / 12;
    m %= 12;
    if (m == 0)
    {
        m = 12;
        y--;
    }
    printf("%d-%02d-%02d", y, m, d);

    return 0;
}