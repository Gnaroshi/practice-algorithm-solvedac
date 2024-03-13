// problem: Counting Swann’s Coins
// id: 5292
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            cout << "DeadMan\n";
        else if (i % 3 == 0)
            cout << "Dead\n";
        else if (i % 5 == 0)
            cout << "Man\n";
        else
            cout << i << ' ';
    }

    return 0;
}