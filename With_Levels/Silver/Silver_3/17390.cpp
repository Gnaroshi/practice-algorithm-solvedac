// problem: 이건 꼭 풀어야 해!
// id: 17390
// time taken: 3m
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    int *ns = (int *)malloc(sizeof(int) * n + 1);
    ns[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> ns[i];
    sort(ns + 1, ns + n + 1);
    for (int i = 2; i <= n; i++)
        ns[i] += ns[i - 1];
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << ns[r] - ns[l - 1] << '\n';
    }
    return 0;
}