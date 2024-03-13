// problem: Rectangles
// id: 9950
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c == 0)
            break;
        if (!a)
            cout << c / b << ' ' << b << ' ' << c;
        else if (!b)
            cout << a << ' ' << c / a << ' ' << c;
        else
            cout << a << ' ' << b << ' ' << a * b;
        cout << '\n';
    }

    return 0;
}