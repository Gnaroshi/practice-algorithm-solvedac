// problem: Класс
// id: 27225
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    cout << min(n, m) * 2 + ((max(n, m) - min(n, m)) % 2 == 1 ? 1 : 0);

    return 0;
}
