// problem: 노솔브 방지문제야!!
// id: 15917
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
        int a;
        cin >> a;
        cout << ((a & (-a)) == a) << '\n';
    }

    return 0;
}