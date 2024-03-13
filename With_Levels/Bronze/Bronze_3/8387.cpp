// problem: Dyslexia
// id: 8387
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int ans = 0;
    string a, b;
    cin >> n >> a >> b;
    int iter = a.length();
    for (int i = 0; i < iter; i++)
        if (a[i] == b[i])
            ans++;
    cout << ans;

    return 0;
}