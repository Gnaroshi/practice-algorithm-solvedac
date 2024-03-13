// problem: Betygsättning
// id: 20839
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, c, e, aa, cc, ee;
    cin >> a >> c >> e >> aa >> cc >> ee;
    if (ee == e)
    {
        if (cc == c)
        {
            if (aa == a)
                cout << "A";
            else if (aa >= (a + 1) / 2)
                cout << "B";
            else
                cout << "C";
        }
        else if (cc >= (c + 1) / 2)
        {
            cout << "D";
        }
        else
            cout << "E";
    }
    else
        cout << "E";

    return 0;
}