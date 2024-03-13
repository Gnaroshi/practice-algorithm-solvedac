// problem: Occupy parking
// id: 16018
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0;
    string a, b;
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i] && a[i] == 'C')
            ans++;
    }
    cout << ans;

    return 0;
}