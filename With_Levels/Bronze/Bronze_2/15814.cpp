// problem: 야바위 대장
// id: 15814
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int n;
    cin >> s >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        swap(s[a], s[b]);
    }
    cout << s;

    return 0;
}