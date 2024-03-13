// problem: Counting Sheep
// id: 7366
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        int n, cnt = 0;
        cin >> n;
        string s;
        while (n--)
        {
            cin >> s;
            if (s == "sheep")
                cnt++;
        }
        cout << "Case " << tcc << ": This list contains " << cnt
             << " sheep.\n\n";
    }

    return 0;
}