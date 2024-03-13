// problem: Mult!
// id: 24408
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, f, t;
    cin >> n;
    bool isF = true;
    for (int i = 0; i < n; i++)
    {
        if (isF)
        {
            cin >> f;
            isF = false;
        }
        else
        {
            cin >> t;
            if (t % f == 0)
            {
                cout << t << '\n';
                isF = true;
            }
        }
    }

    return 0;
}
