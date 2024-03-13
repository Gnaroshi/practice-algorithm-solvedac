// problem: Some Sum
// id: 21185
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
        cout << "Either";
    else if (n % 4 == 0)
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}