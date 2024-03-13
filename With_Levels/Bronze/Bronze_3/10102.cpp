// problem: 개표
// id: 10102
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    string s;
    cin >> n >> s;
    int iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == 'A')
            cnt++;
        else
            cnt--;
    }
    if (cnt > 0)
        cout << 'A';
    else if (cnt < 0)
        cout << 'B';
    else
        cout << "Tie";

    return 0;
}