// problem: Экзамен
// id: 22123
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
        int h1, m1, s1, h2, m2, s2, k;
        string ss, sf;
        cin >> ss >> sf >> k;
        h1 = (ss[0] - '0') * 10 + ss[1] - '0';
        m1 = (ss[3] - '0') * 10 + ss[4] - '0';
        s1 = (ss[6] - '0') * 10 + ss[7] - '0';
        h2 = (sf[0] - '0') * 10 + sf[1] - '0';
        m2 = (sf[3] - '0') * 10 + sf[4] - '0';
        s2 = (sf[6] - '0') * 10 + sf[7] - '0';
        int s = 0, f = 0;
        s += s1 + m1 * 60 + h1 * 3600;
        f += s2 + m2 * 60 + h2 * 3600;
        f -= s;
        if (f <= 0)
            f += 3600 * 24;
        k *= 60;
        if (k <= f)
            cout << "Perfect\n";
        else if (k <= f + 3600)
            cout << "Test\n";
        else
            cout << "Fail\n";
    }

    return 0;
}