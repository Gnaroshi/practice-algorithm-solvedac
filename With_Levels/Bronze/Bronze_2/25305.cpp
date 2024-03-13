// problem: 커트라인
// id: 25305
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int *st = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        cin >> st[i];
    sort(st, st + n, greater<int>());
    cout << st[k - 1];

    return 0;
}