// problem: Simple Sum
// id: 26531
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    char t;
    cin >> a >> t >> b >> t >> c;
    if (a + b == c)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}