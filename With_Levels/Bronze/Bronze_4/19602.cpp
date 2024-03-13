#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, m, l;
    cin >> s >> m >> l;

    int ans = s + 2 * m + 3 * l;
    if (ans >= 10)
        cout << "happy";
    else
        cout << "sad";

    return 0;
}