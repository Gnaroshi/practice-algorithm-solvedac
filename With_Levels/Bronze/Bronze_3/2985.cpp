// problem: 세 수
// id: 2985
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b, c;
    cin >> a >> b >> c;
    if (a + b == c)
        cout << a << '+' << b << '=' << c;
    else if (a - b == c)
        cout << a << '-' << b << '=' << c;
    else if (a * b == c)
        cout << a << '*' << b << '=' << c;
    else if (a / b == c)
        cout << a << '/' << b << '=' << c;
    else
    {
        if (a == b + c)
            cout << a << '=' << b << '+' << c;
        else if (a == b - c)
            cout << a << '=' << b << '-' << c;
        else if (a == b * c)
            cout << a << '=' << b << '*' << c;
        else if (a == b / c)
            cout << a << '=' << b << '/' << c;
    }

    return 0;
}
