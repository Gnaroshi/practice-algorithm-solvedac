// problem: Hay Bales
// id: 5919
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, s = 0;
    cin >> n;
    int *p = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        s += p[i];
    }
    a = s / n;
    s = 0;
    for (int i = 0; i < n; i++)
    {
        s += abs(p[i] - a);
    }
    cout << s / 2;

    return 0;
}