#include <bits/stdc++.h>
using namespace std;

int c[101];
int ans = 0;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (c[temp] == 0)
            c[temp] = 1;
        else
            ans++;
    }
    cout << ans << '\n';

    return 0;
}