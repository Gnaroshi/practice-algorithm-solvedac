// problem: 개미
// id: 11880
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
        long long a, b, c;
        cin >> a >> b >> c;
        cout << min(a * a + (b + c) * (b + c),
                    min(b * b + (a + c) * (a + c),
                        c * c + (b + a) * (b + a)))
             << '\n';
    }

    return 0;
}