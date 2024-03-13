// problem: 막대과자 포장
// id: 14219
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    if (n % 3 == 0 || m % 3 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}