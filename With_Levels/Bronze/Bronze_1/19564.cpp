// problem: 반복
// id: 19564
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k = 1, iter;
    char bef;
    string s;
    cin >> s;
    bef = s.front();
    iter = s.length();
    for (int i = 1; i < iter; i++)
    {
        if (bef >= s[i])
            k++;
        bef = s[i];
    }
    cout << k << '\n';

    return 0;
}