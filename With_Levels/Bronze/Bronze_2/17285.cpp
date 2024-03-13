// problem: XORChic
// id: 17285
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    char k = s.front() ^ 'C';
    for (auto i : s)
        cout << (char)(i ^ k);

    return 0;
}