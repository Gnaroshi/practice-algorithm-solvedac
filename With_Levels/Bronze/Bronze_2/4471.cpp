// problem: The Navi-Computer is Down!
// id: 4471
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed;
    cout.precision(2);
    int tc;
    cin >> tc;
    while (tc--)
    {
        string a, b;
        double t = 0, x[3], y[3];
        cin.ignore();
        getline(cin, a);
        for (int i = 0; i < 3; i++)
            cin >> x[i];
        cin.ignore();
        getline(cin, b);
        for (int i = 0; i < 3; i++)
            cin >> y[i];
        for (int i = 0; i < 3; i++)
            t += (y[i] - x[i]) * (y[i] - x[i]);
        cout << a << " to " << b << ": " << sqrt(t) << '\n';
    }

    return 0;
}