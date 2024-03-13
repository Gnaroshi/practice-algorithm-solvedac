// problem: Walk Like an Egyptian
// id: 4922
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
        cout << n << " => " << 1 + n * (n - 1) << '\n';
    }

    return 0;
}