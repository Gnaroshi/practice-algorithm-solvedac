// problem: Las
// id: 8669
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, g, r;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> g >> r;
        s.insert(r);
    }
    cout << s.size();

    return 0;
}