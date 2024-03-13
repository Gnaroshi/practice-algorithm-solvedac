// problem: 스페셜 저지
// id: 9253
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b, c;
    cin >> a >> b >> c;
    if (a.find(c) != string::npos && b.find(c) != string::npos)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}