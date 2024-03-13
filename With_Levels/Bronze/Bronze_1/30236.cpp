// problem: 증가 수열
// id: 30236
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
        int n, d = 0, t;
        cin >> n;
        while (n--)
        {
            d++;
            cin >> t;
            if (t == d)
                d++;
        }
        cout << d << '\n';
    }

    return 0;
}