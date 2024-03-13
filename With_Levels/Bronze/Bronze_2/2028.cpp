// problem: 자기복제수
// id: 2028
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, n2;
        cin >> n;
        n2 = n * n;
        string ns = to_string(n), n2s = to_string(n2);
        cout << ((n2s.substr(n2s.length() - ns.length(), ns.length()) == ns) ? "YES\n" : "NO\n");
    }

    return 0;
}