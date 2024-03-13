// problem: 숫자 맞추기 게임
// id: 4892
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1;; i++)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        int ns[5];
        ns[0] = n;
        ns[1] = 3 * n;
        ns[2] = ns[1] % 2 == 0 ? ns[1] / 2 : (ns[1] + 1) / 2;
        ns[3] = 3 * ns[2];
        ns[4] = ns[3] / 9;
        cout << i << ". " << (ns[1] % 2 == 0 ? "even" : "odd") << ' ' << ns[4] << '\n';
    }

    return 0;
}