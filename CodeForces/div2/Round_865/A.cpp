// problem: A. Ian Visits Mary
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        cout << 2 << '\n'
             << a + 1 << ' ' << b << '\n'
             << a << ' ' << b << '\n';
    }

    return 0;
}