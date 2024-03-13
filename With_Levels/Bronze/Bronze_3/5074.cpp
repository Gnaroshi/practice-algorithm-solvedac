// problem: When Do We Finish?
// id: 5074
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h1, m1, h2, m2, n;
    string s;

    while (true)
    {
        n = 0;
        getline(cin, s);
        h1 = (s[0] - '0') * 10 + s[1] - '0';
        m1 = (s[3] - '0') * 10 + s[4] - '0';
        h2 = (s[6] - '0') * 10 + s[7] - '0';
        m2 = (s[9] - '0') * 10 + s[10] - '0';
        if (h1 + m1 + h2 + m2 == 0)
            break;
        h1 += h2;
        m1 += m2;
        if (m1 >= 60)
        {
            h1++;
            m1 -= 60;
        }

        if (h1 >= 24)
        {
            n = h1 / 24;
            h1 = h1 % 24;
        }
        if (h1 < 10)
            cout << 0;
        cout << h1 << ":";
        if (m1 < 10)
            cout << 0;
        cout << m1;
        if (n != 0)
            cout << " +" << n;
        cout << '\n';
    }

    return 0;
}