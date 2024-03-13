// problem: 삼각 무늬 - 1
// id: 11320
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
        int a, b;
        cin >> a >> b;
        a /= b;
        cout << a * a << '\n';
    }

    return 0;
}