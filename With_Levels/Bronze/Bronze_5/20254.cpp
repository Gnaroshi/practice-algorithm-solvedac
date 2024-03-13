#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n[4];
    for (int i = 0; i < 4; i++)
        cin >> n[i];
    cout << 56 * n[0] + 24 * n[1] + 14 * n[2] + 6 * n[3] << '\n';

    return 0;
}