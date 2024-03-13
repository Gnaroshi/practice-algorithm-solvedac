// problem: 소수가 아닌 수 3
// id: 31432
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    cout << "YES\n";
    t = v.back();
    if (t == 0)
        cout << 0;
    else
        cout << t << t << t;
    return 0;
}