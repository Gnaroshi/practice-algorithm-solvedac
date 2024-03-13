// problem: 세준세비
// id: 1524
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
        int n, m, cs = 0, cb = 0;
        cin >> n >> m;
        vector<int> s(n), b(m);
        for (auto &i : s)
            cin >> i;
        for (auto &i : b)
            cin >> i;
        sort(s.begin(), s.end());
        sort(b.begin(), b.end());
        while (true)
        {
            if (s[cs] < b[cb])
                cs++;
            else
                cb++;
            if (n == cs)
            {
                cout << "B\n";
                break;
            }
            else if (m == cb)
            {
                cout << "S\n";
                break;
            }
        }
    }
    return 0;
}