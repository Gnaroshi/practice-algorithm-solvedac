// problem: Exercising
// id: 11295
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double l;
    int cnt = 0;
    cout << fixed;
    cout.precision(5);
    while (true)
    {
        cin >> l;
        if (l == 0)
            break;
        int m;
        cin >> m;
        l /= 100.0;
        cout << "User " << ++cnt << "\n";
        for (int i = 0; i < m; i++)
        {
            double t;
            cin >> t;
            cout << l * t / 1000.0 << '\n';
        }
    }

    return 0;
}