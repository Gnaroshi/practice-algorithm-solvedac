// problem: Sun and Moon
// id: 27590
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, ss, m, mm;
    cin >> s >> ss >> m >> mm;
    int ans = -s;
    s = -s;
    m = -m;
    s += ss;
    m += mm;
    while (true)
    {
        if (s == m)
            break;
        if (s > m)
            m += mm;
        else
            s += ss;
    }
    cout << s;
    
    return 0;
}