// problem: 오렌지먹은지오랜지
// id: 27962
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
    int iter = s.length();

    bool isOk = false;

    for (int i = 0; i < iter; i++)
    {
        int cnt = 0;
        for (int j = 0; j < i; j++)
        {
            // cout << i << ' ' << j << ' ' << iter - i + j << ' ';
            // cout << s[j] << ' ' << s[iter - i + j] << '\n';
            if (s[j] != s[iter - i + j])
                cnt++;
        }
        if (cnt == 1)
        {
            isOk = true;
            break;
        }
    }

    if (isOk)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}