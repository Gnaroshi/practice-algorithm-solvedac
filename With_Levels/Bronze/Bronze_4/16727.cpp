// problem:
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, aa, b, bb;
    cin >> a >> b >> bb >> aa;
    int t = a + aa - b - bb;
    if (t > 0)
        cout << "Persepolis";
    else if (t < 0)
        cout << "Esteghlal";
    else
    {
        if (a > bb)
            cout << "Esteghlal";
        else if (a < bb)
            cout << "Persepolis";
        else
            cout << "Penalty";
    }
    cout << '\n';

    return 0;
}