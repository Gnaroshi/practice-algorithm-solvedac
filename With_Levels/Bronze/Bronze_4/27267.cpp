// problem: Сравнение комнат
// id: 27267
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a * b > c * d)
        cout << "M";
    else if (a * b == c * d)
        cout << "E";
    else
        cout << "P";

    return 0;
}