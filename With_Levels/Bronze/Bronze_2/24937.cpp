// problem: SciComLove (2022)
// id: 24937
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "SciComLove";
    int n;
    cin >> n;
    n %= 10;
    cout << s.substr(n, 10 - n) << s.substr(0, n);

    return 0;
}