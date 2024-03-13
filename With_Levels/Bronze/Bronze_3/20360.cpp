// problem: Binary numbers
// id: 20360
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v;
    while (n > 0)
    {
        v.push_back(n % 2);
        n /= 2;
    }
    int loc = 0;
    for (auto i : v)
    {
        if (i == 1)
            cout << loc << ' ';
        loc++;
    }

    return 0;
}