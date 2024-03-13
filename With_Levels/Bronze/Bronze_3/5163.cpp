// problem: Isn’t It Funny How a Bear Likes Honey?
// id: 5163
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        cout << "Data Set " << i << ":\n";
        int b;
        double w, t, s = 0;
        cin >> b >> w;
        for (int j = 0; j < b; j++)
        {
            cin >> t;
            s += (4.0 / 3.0 * M_PI / 1000.0) * t * t * t;
        }
        if (s >= w)
            cout << "Yes\n";
        else
            cout << "No\n";

        if (i != tc)
            cout << '\n';
    }

    return 0;
}