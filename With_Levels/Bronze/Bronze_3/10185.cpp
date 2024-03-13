// problem: Focus
// id: 10185
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
        double p, q;
        cin >> p >> q;
        printf("f = %.1lf\n", p * q / (p + q));
    }

    return 0;
}