// problem: 스타후르츠
// id: 17496
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, c, p;
    cin >> n >> t >> c >> p;
    n--;
    cout << (n / t) * c * p;

    return 0;
}