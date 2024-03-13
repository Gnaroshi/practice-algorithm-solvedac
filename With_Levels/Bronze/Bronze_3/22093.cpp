// problem: Соцопрос
// id: 22093
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
        int n, a, b;
        cin >> n >> a >> b;
        cout << max(0, a - b) << ' ' << min(a, n - b) << '\n';
    }

    return 0;
}