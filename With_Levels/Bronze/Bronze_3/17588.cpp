// problem: Missing Numbers
// id: 17588
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    int mx = -1;
    cin >> n;
    int *ns = (int *)malloc(sizeof(int) * 201);
    fill(ns, ns + 201, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        ns[t]++;
        if (i == n - 1)
            mx = t;
    }
    if (n == mx)
        cout << "good job";
    else
    {
        for (int i = 1; i <= mx; i++)
        {
            if (!ns[i])
                cout << i << '\n';
        }
    }

    return 0;
}