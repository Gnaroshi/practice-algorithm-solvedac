// problem: 불안정한 수열
// id: 28323
// time taken:
#include <bits/stdc++.h>
using namespace std;

int v[300001];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx = 1, bef;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] %= 2;
    }
    bef = v[0];
    for (int i = 1; i < n; i++)
    {
        if ((bef + v[i]) % 2)
        {
            bef = v[i];
            mx++;
        }
    }
    cout << mx;

    return 0;
}