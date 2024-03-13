#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    if (m == 1 || m == 2)
        cout << "NEWBIE!\n";
    else if (m <= n)
        cout << "OLDBIE!\n";
    else
        cout << "TLE!\n";
    return 0;
}