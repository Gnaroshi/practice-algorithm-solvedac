// problem: Aron
// id: 15354
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char a, b;
    int n;
    int ans = 1;
    cin >> n;
    b = 'a';
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (b != a)
            ans++;
        b = a;
    }
    cout << ans;

    return 0;
}