// problem: A번 - Since 1973
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int cnt = 0;
    string s;
    int iter;
    for (int i = 0; i < n; i++)
    {
        cnt++;
        s = to_string(i);
        iter = s.length();
        for (int j = 0; j < iter - 1; j++)
        {
            if (s[j] == '5' && s[j + 1] == '0')
            {
                cnt++;
                break;
            }
        }
    }
    cout << cnt;

    return 0;
}