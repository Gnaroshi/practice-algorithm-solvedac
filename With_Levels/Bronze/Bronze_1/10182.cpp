// problem: AcidBase
// id: 10182
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
        string temp;
        char c;
        double n;
        cin >> temp >> c >> n;
        if (temp == "H")
            printf("%.2lf\n", -log10(n));
        else
            printf("%.2lf\n", 14.00 + log10(n));
    }

    return 0;
}