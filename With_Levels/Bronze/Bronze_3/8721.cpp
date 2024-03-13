// problem: Wykreślanka
// id: 8721
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n;
    int st = 1;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == st)
            st++;
        else
            cnt++;
    }
    cout << cnt;

    return 0;
}