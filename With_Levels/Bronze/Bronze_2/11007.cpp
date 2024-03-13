// problem: Inverse Move-to-Front Transform
// id: 11007
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
        string al = "abcdefghijklmnopqrstuvwxyz";
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            cout << al[t];
            al.insert(al.begin(), al[t]);
            al.erase(al.begin() + t + 1);
        }
        cout << '\n';
    }

    return 0;
}