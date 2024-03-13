// problem: 短針 (Hour Hand)
// id: 24083
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if (a + b > 12)
    {
        if ((a + b) % 12 == 0)
            cout << 12;
        else
            cout << (a + b) % 12;
    }
    else
        cout << a + b;

    return 0;
}