// problem: Alarme Despertador
// id: 13670
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int h1, m1, h2, m2;
        cin >> h1 >> m1 >> h2 >> m2;
        if (h1 + m1 + h2 + m2 == 0)
            break;
        h2 -= h1;
        m2 -= m1;
        if (m2 < 0)
        {
            m2 += 60;
            h2--;
        }
        if (h2 < 0)
            h2 += 24;
        cout << h2 * 60 + m2 << '\n';
    }

    return 0;
}