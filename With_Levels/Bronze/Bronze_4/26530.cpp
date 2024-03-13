// problem: Shipping
// id: 26530
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        double ans = 0;
        int cnt;
        cin >> cnt;
        while (cnt--)
        {
            string s;
            int n;
            double cur;
            cin >> s >> n;
            scanf("%lf", &cur);
            ans += n * cur;
        }
        printf("$%.2lf\n", ans);
    }

    return 0;
}