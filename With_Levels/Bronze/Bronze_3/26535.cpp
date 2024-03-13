// problem: Chicken Pen
// id: 26535
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int cnt = 1;
    while (cnt * cnt < n)
        cnt++;
    for (int i = 0; i < cnt + 2; i++)
        cout << 'x';
    cout << '\n';
    for (int i = 0; i < cnt; i++)
    {
        cout << 'x';
        for (int j = 0; j < cnt; j++)
            cout << '.';
        cout << 'x' << '\n';
    }
    for (int i = 0; i < cnt + 2; i++)
        cout << 'x';
    cout << '\n';

    return 0;
}