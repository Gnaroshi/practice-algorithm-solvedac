// problem: Serious Problem
// id: 17094
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
    int iter = s.length();
    int cnt = 0;
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == '2')
            cnt--;
        else
            cnt++;
    }
    if (cnt < 0)
        cout << "2";
    else if (cnt > 0)
        cout << "e";
    else
        cout << "yee";

    return 0;
}