// problem: No Brainer
// id: 4562
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
        int x, y;
        cin >> x >> y;
        if (x >= y)
            cout << "MMM BRAINS\n";
        else
            cout << "NO BRAINS\n";
    }

    return 0;
}