// problem: St. Ives
// id: 4696
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    cin.tie(nullptr);
    while (true)
    {
        double t;
        cin >> t;
        double ans = 0;
        if (t == 0)
            break;
        for (int i = 0; i <= 4; i++)
            ans += pow(t, i);
        printf("%.2lf\n", ans);
    }

    return 0;
}