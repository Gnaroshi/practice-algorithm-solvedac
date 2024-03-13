// problem: Copa do Mundo
// id: 13687
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    while (true)
    {
        cin >> t >> n;
        if (t + n == 0)
            break;
        string s;
        int cnt = 0, sc;
        for (int i = 0; i < t; i++)
        {
            cin >> s >> sc;
            cnt += sc;
        }
        cout << max(0, 3 * n - cnt) << '\n';
        // x + y = n
        // x*3 + 2*y = s
        // -y = s-3n
        // y = 3n-s
    }

    return 0;
}