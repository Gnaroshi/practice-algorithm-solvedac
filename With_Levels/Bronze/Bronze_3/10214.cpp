// problem: Baseball
// id: 10214
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long tc;
    cin >> tc;
    while (tc--)
    {
        long long a, b, t = 0;
        for (int i = 0; i < 9; i++)
        {
            cin >> a >> b;
            t += a;
            t -= b;
        }
        if (t > 0)
            cout << "Yonsei\n";
        else if (t < 0)
            cout << "Korea\n";
        else
            cout << "Draw\n";
    }

    return 0;
}
