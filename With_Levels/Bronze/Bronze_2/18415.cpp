// problem: キャピタリゼーション (Capitalization)
// id: 18415
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n - 2; i++)
    {
        if (s.substr(i, 3) == "joi")
        {
            for (int j = i; j < i + 3; j++)
                s[j] = toupper(s[j]);
        }
    }
    cout << s;

    return 0;
}