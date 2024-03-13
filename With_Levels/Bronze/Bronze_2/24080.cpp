// problem: 複雑な文字列 (Complex String)
// id: 24080
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    string s;
    bool al[26] = {0};
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        al[s[i] - 'A'] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (al[i])
            cnt++;
        if (cnt >= 3)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";

    return 0;
}