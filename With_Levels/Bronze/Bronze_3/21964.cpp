// problem: 선린인터넷고등학교 교가
// id: 21964
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
    for (int i = iter - 5; i < iter; i++)
        cout << s[i];

    return 0;
}