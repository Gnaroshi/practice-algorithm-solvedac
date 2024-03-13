// problem: On the Bus
// id: 7582
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int z, p, sn, a, b;
    while (true)
    {
        cin >> s >> z;
        if (s == "#" && z == 0)
            break;
        cin >> p >> sn;
        for (int i = 0; i < sn; i++)
        {
            cin >> a >> b;
            p -= a;
            p = max(p, 0);
            if (p + b >= z)
                p = z;
            else
                p += b;
        }
        cout << s << ' ' << p << '\n';
    }

    return 0;
}