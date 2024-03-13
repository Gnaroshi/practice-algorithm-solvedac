// problem: Zbiór
// id: 8678
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
        int a, b;
        cin >> a >> b;
        if (b % a == 0)
            cout << "TAK\n";
        else
            cout << "NIE\n";
    }

    return 0;
}