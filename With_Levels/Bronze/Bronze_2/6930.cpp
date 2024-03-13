// problem: Mod Inverse
// id: 6930
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, m;
    cin >> x >> m;
    for (int i = 1; i < m; i++)
    {
        if ((x * i) % m == 1)
        {
            cout << i;
            return 0;
        }
    }
    cout << "No such integer exists.";

    return 0;
}