// problem: 3000번 버스
// id: 9546
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, t = 1;
    cin >> tc;
    int b[31];

    for (int i = 0; i < 31; i++)
        b[i] = t, t *= 2;

    while (tc--)
    {
        int k;
        cin >> k;
        cout << b[k] - 1 << '\n';
    }

    return 0;
}