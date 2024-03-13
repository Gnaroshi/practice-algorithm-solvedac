// problem: 쿠키애호가
// id: 11134
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
        long long n, c;
        cin >> n >> c;
        if (n % c != 0)
            cout << n / c + 1;
        else
            cout << n / c;
        cout << '\n';
    }

    return 0;
}