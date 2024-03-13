// problem: Tax
// id: 14182
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    while (true)
    {
        cin >> a;
        if (!a)
            break;
        if (a <= 1000000)
            cout << a;
        else if (a <= 5000000)
            cout << a * 90 / 100;
        else
            cout << a * 80 / 100;
        cout << '\n';
    }

    return 0;
}