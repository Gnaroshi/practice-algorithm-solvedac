// problem: Jogo de Varetas
// id: 13608
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        int a, b, cnt = 0;
        while (n--)
        {
            cin >> a >> b;
            cnt += b / 2;
        }
        cout << cnt / 2 << '\n';
    }

    return 0;
}