// problem: Rock-Paper-Scissors for three
// id: 21895
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string a, b, ans = "";
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            if (a[i] == 'P')
                ans += 'S';
            else if (a[i] == 'R')
                ans += 'P';
            else
                ans += 'R';
        }
        else
        {
            if ((a[i] == 'P' && b[i] == 'S') || (b[i] == 'P' && a[i] == 'S'))
                ans += 'S';
            else if ((a[i] == 'R' && b[i] == 'S') || (b[i] == 'R' && a[i] == 'S'))
                ans += 'R';
            else
                ans += 'P';
        }
    }
    cout << ans;

    return 0;
}