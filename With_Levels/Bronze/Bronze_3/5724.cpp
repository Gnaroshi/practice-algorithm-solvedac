// problem: 파인만
// id: 5724
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        cout << n * (n + 1) * (2 * n + 1) / 6 << '\n';
    }

    return 0;
}