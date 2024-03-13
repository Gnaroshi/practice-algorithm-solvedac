// problem: Triangle
// id: 9366
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        cout << "Case #" << i << ": ";
        int a, b, c;
        cin >> a >> b >> c;
        int mx = max(max(a, b), c);
        if (mx >= a + b + c - mx)
            cout << "invalid!";
        else
        {
            if (a == b && b == c)
                cout << "equilateral";
            else if (a == b || b == c || a == c)
                cout << "isosceles";
            else
                cout << "scalene";
        }
        cout << '\n';
    }

    return 0;
}