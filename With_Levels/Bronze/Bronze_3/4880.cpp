// problem: 다음수
// id: 4880
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
        if (!a && !b && !c)
            break;
        if (a + c == 2 * b)
            cout << "AP " << c + b - a;
        else
            cout << "GP " << c * b / a;
        cout << '\n';
    }

    return 0;
}