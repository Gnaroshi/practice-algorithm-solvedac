// problem: Making Change
// id: 24325
// tag:
// time taken:
#include <bits/stdc++.h>
using namespace std;

int ch[5] = {50, 20, 10, 5, 1};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        double a, b;
        cin >> a >> b;
        b -= a;
        int t = int(b), r;
        for (int i = 0; i < 4; i++)
        {
            r = t / ch[i];
            cout << r << "-$" << ch[i] << ", ";
            t -= r * ch[i];
        }
        cout << t << "-$" << ch[4] << "\n";
    }

    return 0;
}