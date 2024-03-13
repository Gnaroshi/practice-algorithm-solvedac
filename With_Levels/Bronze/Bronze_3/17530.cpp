// problem: Buffoon
// id: 17530
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, c, t;
    bool isOk = true;
    cin >> n >> c;
    for (int i = 1; i < n; i++)
    {
        cin >> t;
        if (t > c)
            isOk = false;
    }
    if (isOk)
        cout << "S";
    else
        cout << "N";

    return 0;
}