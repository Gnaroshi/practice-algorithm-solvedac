#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s;
    while (scanf("%d%d", &n, &s) == 2)
    {
        cout << s / (n + 1) << '\n';
    }

    return 0;
}