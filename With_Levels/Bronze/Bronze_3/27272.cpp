// problem: Пары
// id: 27272
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[4];
    for (int i = 0; i < 4; i++)
        cin >> n[i];
    sort(n, n + 4);
    cout << n[0] * n[1] + n[2] * n[3];

    return 0;
}