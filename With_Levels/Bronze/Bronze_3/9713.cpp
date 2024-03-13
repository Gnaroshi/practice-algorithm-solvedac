// problem: Sum of Odd Sequence
// id: 9713
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
        int n;
        cin >> n;
        n /= 2;
        n++;
        cout << n * n << '\n';
    }

    return 0;
}