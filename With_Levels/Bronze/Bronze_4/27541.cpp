// problem: 末尾の文字 (Last Letter)
// id: 27541
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
    int iter = s.length() - 1;
    for (int i = 0; i < iter; i++)
        cout << s[i];
    if (s[iter] != 'G')
        cout << s[iter] << 'G';

    return 0;
}