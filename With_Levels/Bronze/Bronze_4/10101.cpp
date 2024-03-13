#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c)
        cout << "Equilateral\n";
    else if (a + b + c == 180 && (a == b || b == c || c == a))
        cout << "Isosceles\n";
    else if (a + b + c == 180 && (a != b && b != c && c != a))
        cout << "Scalene\n";
    else
        cout << "Error\n";
    return 0;
}