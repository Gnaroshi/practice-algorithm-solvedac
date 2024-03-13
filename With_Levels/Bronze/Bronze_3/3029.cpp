// problem: 경고
// id: 3029
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h1, h2, m1, m2, s1, s2;
    char t;
    cin >> h1 >> t >> m1 >> t >> s1;
    cin >> h2 >> t >> m2 >> t >> s2;
    if (h2 == h1 && m2 == m1 && s2 == s1)
        cout << "24:00:00";
    else
    {
        h2 -= h1;
        m2 -= m1;
        s2 -= s1;
        if (s2 < 0)
        {
            s2 += 60;
            m2--;
        }
        if (m2 < 0)
        {
            m2 += 60;
            h2--;
        }
        if (h2 < 0)
            h2 += 24;

        printf("%02d:%02d:%02d", h2, m2, s2);
    }

    return 0;
}