// problem: Flat
// id: 3512
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, be, ar = 0;
    double c, ap, temp = 0;
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        string s;
        int t;
        cin >> t >> s;
        ar += t;
        if (s == "bedroom")
            be += t;
        else if (s == "balcony")
            temp += t;
    }
    cout << fixed;
    cout.precision(8);
    cout << ar << '\n'
         << be << '\n'
         << (ar - temp / 2) * c;

    return 0;
}
