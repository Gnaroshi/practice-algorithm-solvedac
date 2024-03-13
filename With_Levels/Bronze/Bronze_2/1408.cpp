// problem: 24
// id: 1408
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
        if (a[i] == ':')
            a[i] = ' ';
    for (int i = 0; i < b.length(); i++)
        if (b[i] == ':')
            b[i] = ' ';
    int h1, h2, m1, m2, s1, s2, sy = 0, dh = 0;
    stringstream sta, stb;
    sta.str(a);
    sta >> h1 >> m1 >> s1;
    stb.str(b);
    stb >> h2 >> m2 >> s2;
    sy += h1 * 3600 + m1 * 60 + s1;
    dh += h2 * 3600 + m2 * 60 + s2;
    int d = (sy < dh ? dh - sy : 24 * 3600 - sy + dh);
    printf("%02d:%02d:%02d", d / 3600, (d % 3600) / 60, (d % 3600) % 60);

    return 0;
}