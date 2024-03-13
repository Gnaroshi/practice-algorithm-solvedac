// problem: Don’t pass me the ball!
// id: 6768
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << (n - 1) * (n - 2) * (n - 3) / 6;

    return 0;
}
