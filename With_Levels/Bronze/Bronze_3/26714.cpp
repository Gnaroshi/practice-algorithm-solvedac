// problem: Liczenie punktów
// id: 26714
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int term = n / 10;
    int iter = s.length();
    int ans = 0;
    for (int i = 0; i < iter; i += term)
    {
        bool isOk = true;
        for (int j = i; j < term + i; j++)
        {
            if (s[j] == 'N')
            {
                isOk = false;
                break;
            }
        }
        if (isOk)
            ans++;
    }
    cout << ans;

    return 0;
}