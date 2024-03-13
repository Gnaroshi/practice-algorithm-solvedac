// problem: Black Friday
// id: 11213
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n;
    int cnt[7] = {0};
    vector<int> v(7);
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        cnt[t]++;
        v[t] = i;
    }
    for (int i = 6; i > 0; i--)
    {
        if (cnt[i] == 1)
        {
            cout << v[i];
            return 0;
        }
    }
    cout << "none";

    return 0;
}