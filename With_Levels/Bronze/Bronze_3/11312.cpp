// problem: 삼각 무늬 - 2
// id: 11312
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
        long long a, b, t;
        cin >> a >> b;
        t = a / b;
        cout << t * t << '\n';
    }

    return 0;
}