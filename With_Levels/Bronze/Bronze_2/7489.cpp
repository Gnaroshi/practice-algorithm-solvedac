// problem: 팩토리얼
// id: 7489
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
        long long n, c = 1;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            c *= i;
            c %= 100000000;
            while (c % 10 == 0)
                c /= 10;
        }
        cout << c % 10 << '\n';
    }

    return 0;
}