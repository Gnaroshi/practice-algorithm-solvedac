// problem: 거북이
// id: 2959
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

    cout << n[0] * n[2];

    return 0;
}