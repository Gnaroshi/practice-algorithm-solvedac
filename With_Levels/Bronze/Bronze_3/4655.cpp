// problem: Hangover
// id: 4655
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double n;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        int cnt = 0;
        double cal = 0;
        double t = 2;
        while (cal < n)
        {
            cal += 1.0 / t;
            t += 1;
            cnt++;
        }
        cout << cnt << " card(s)\n";
    }

    return 0;
}