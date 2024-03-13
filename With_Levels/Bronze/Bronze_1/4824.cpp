// problem: Post Office
// id: 4824
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<double> a(3);
    while (true)
    {
        double t = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            t += a[i];
        }
        if (t == 0)
            break;
        sort(a.begin(), a.end());
        if ((125 <= a[2]) && (90 <= a[1]) && (0.25 <= a[0]))
        {
            if (a[2] <= 290 && a[1] <= 155 && a[0] <= 7)
            {
                cout << "letter\n";
                continue;
            }
            else if (a[2] <= 380 && a[1] <= 300 && a[0] <= 50)
            {
                cout << "packet\n";
                continue;
            }
            else if (a[2] + 2 * (a[1] + a[0]) <= 2100)
            {
                cout << "parcel\n";
                continue;
            }
        }
        cout << "not mailable\n";
    }

    return 0;
}