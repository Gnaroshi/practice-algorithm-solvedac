// problem: Turnering
// id: 26943
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r;
    cin >> n >> r;
    int *ns = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n - 1; i++)
    {
        int t = i - r + 2;
        if (t <= 0)
            t += n - 1;
        ns[i] = t;
    }
    ns[n - 1] = n;
    for (int i = 0; i < n / 2; i++)
    {
        cout << ns[i] << '-' << ns[n - i - 1] << '\n';
    }

    return 0;
}