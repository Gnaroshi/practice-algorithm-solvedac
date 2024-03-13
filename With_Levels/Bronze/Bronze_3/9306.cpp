// problem: Practice: Roll Call
// id: 9306
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string a, b;
        cin >> a >> b;
        cout << "Case " << i << ": " << b << ", " << a << '\n';
    }

    return 0;
}
