// problem: 3D Printed Statues
// id: 15228
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t = 1;
    cin >> n;
    for (int i = 1;; i++)
    {
        if (t >= n)
        {
            cout << i;
            break;
        }
        t <<= 1;
    }

    return 0;
}