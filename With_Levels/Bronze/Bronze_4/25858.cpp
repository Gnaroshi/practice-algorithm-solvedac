// problem: Divide the Cash
// id: 25858
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d, sm;
    cin >> n >> d;
    int *s = (int *)malloc(sizeof(int) * n);
    sm = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        sm += s[i];
    }
    d /= sm;
    for (int i = 0; i < n; i++)
        cout << s[i] * d << '\n';

    return 0;
}