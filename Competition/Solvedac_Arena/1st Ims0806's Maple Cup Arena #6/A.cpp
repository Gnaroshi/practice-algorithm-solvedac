// problem: A번 - 임스의 메이플컵
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, u, l;
    cin >> n >> u >> l;
    if (n >= 1000 && (u >= 8000 || l >= 260))
        cout << "Very Good";
    else if (n >= 1000)
        cout << "Good";
    else
        cout << "Bad";

    return 0;
}