// problem: 수 뒤집기
// id: 3062
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
        int n;
        cin >> n;
        string a = to_string(n);
        string b = a;
        reverse(b.begin(), b.end());
        n = stoi(a) + stoi(b);
        a = to_string(n);
        int iter = a.length();
        bool chk = true;
        for (int i = 0; i < iter / 2; i++)
        {
            if (a[i] != a[iter - i - 1])
            {
                chk = false;
                break;
            }
        }
        if (chk)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}