// problem: Breaking Branches
// id: 17783
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (n % 2 == 1)
        cout << "Bob";
    else
        cout << "Alice\n"
             << n / 2;

    return 0;
}