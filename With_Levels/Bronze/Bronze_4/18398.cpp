// problem: HOMWRK
// id: 18398
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
        int p;
        cin >> p;
        for (int i = 0; i < p; i++)
        {
            int a, b;
            cin >> a >> b;
            cout << a + b << ' ' << a * b << '\n';
        }
    }

    return 0;
}