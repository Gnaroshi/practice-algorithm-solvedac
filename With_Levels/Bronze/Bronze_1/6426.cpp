// problem: Psuedo-Random Numbers
// id: 6426
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // z, i, m, l
    int a, b, c, d, tcc = 1, dp;
    while (true)
    {
        cin >> a >> b >> c >> d;
        if (a + b + c + d == 0)
            break;
        set<int> s;
        vector<int> v;
        while (true)
        {
            if (s.find(d) != s.end())
            {
                dp = d;
                break;
            }
            v.push_back(d);
            s.insert(d);
            d = (a * d + b) % c;
        }
        cout << "Case " << tcc++ << ": " << v.size() - (find(v.begin(), v.end(), dp) - v.begin()) << '\n';
    }

    return 0;
}