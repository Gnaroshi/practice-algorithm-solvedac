// problem: Saving Princess Peach
// id: 24795
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, y, k;
    cin >> n >> y;
    set<int> s;
    for (int i = 0; i < y; i++)
    {
        cin >> k;
        s.insert(k);
    }
    for (int i = 0; i < n; i++)
    {
        if (s.find(i) == s.end())
            cout << i << '\n';
    }
    cout << "Mario got " << s.size() << " of the dangerous obstacles.";

    return 0;
}