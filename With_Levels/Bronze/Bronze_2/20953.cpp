// problem: 고고학자 예린
// id: 20953
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
        cout << (a + b) * ((max(a + b - 1, 0)) * (a + b) / 2) << '\n';
    }

    return 0;
}