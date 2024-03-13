// problem: 고급 여관
// id: 12756
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, as, b, bs;
    cin >> a >> as >> b >> bs;
    while (true)
    {
        if (as <= 0 && bs <= 0)
        {
            cout << "DRAW";
            break;
        }
        else if (as <= 0)
        {
            cout << "PLAYER B";
            break;
        }
        else if (bs <= 0)
        {
            cout << "PLAYER A";
            break;
        }
        as -= b;
        bs -= a;
    }

    return 0;
}