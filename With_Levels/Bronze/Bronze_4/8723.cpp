#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[3];
    for (int i = 0; i < 3; i++)
        cin >> n[i];
    sort(n, n + 3);

    if (n[0] == n[1] && n[1] == n[2])
        cout << 2;
    else if (n[0] * n[0] + n[1] * n[1] == n[2] * n[2])
        cout << 1;
    else
        cout << 0;

    return 0;
}