// problem: Pizza
// id: 26566
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
        double a1, p1, r1, p2;
        cin >> a1 >> p1 >> r1 >> p2;
        if (a1 / p1 > r1 * r1 * M_PI / p2)
            cout << "Slice of pizza";
        else
            cout << "Whole pizza";
        cout << '\n';
    }
    return 0;
}