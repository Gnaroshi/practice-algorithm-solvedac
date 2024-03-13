// problem: 삼각형과 세 변
// id: 5073
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, mx;
    while (true)
    {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            break;
        mx = max(max(a, b), c);
        if ((a + b + c - mx) <= mx)
            cout << "Invalid";
        else if (a == b && b == c)
            cout << "Equilateral";
        else if (a == b || b == c || c == a)
            cout << "Isosceles";
        else if (a != b && b != c)
            cout << "Scalene";
        else
            cout << "Invalid";
        cout << '\n';
    }
    return 0;
}