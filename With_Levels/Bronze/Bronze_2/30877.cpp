// problem: X marks the Spot
// id: 30877
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string ans = "", a, b;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        int l = a.length();
        for (int j = 0; j < l; j++)
        {
            if (!isalpha(a[j]))
                continue;
            if (tolower(a[j]) == 'x')
            {
                if (isalpha(b[j]))
                    ans += toupper(b[j]);
                else
                    ans += b[j];
                break;
            }
        }
    }
    cout << ans;

    return 0;
}