#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll tc;
    cin >> tc;
    ll pn[103];
    fill(pn, pn + 103, 0);
    pn[0] = 1;
    pn[1] = 1;
    pn[2] = 1;
    for (int i = 3; i < 103; i++)
    {
        pn[i] = pn[i - 3] + pn[i - 2];
    }
    while (tc--)
    {
        int n;
        cin >> n;
        cout << pn[n - 1] << '\n';
    }
    return 0;
}