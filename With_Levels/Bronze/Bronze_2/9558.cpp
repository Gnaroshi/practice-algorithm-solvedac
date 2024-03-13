// problem: Between the Mountains
// id: 9558
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n1, n2, mn = 0x3f3f3f3f, t;
        cin >> n1;
        int *a = (int *)malloc(sizeof(int) * n1);
        for (int i = 0; i < n1; i++)
            cin >> a[i];
        cin >> n2;
        for (int i = 0; i < n2; i++)
        {
            cin >> t;
            for (int j = 0; j < n1; j++)
                mn = min(mn, abs(a[j] - t));
        }
        cout << mn << '\n';
    }

    return 0;
}