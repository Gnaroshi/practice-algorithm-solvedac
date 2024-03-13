// problem: Piłeczka
// id: 8719
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
        int a, b, cnt = 0;
        cin >> a >> b;
        while (a < b)
        {
            cnt++;
            a *= 2;
        }
        cout << cnt << '\n';
    }

    return 0;
}