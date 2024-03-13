// problem: A번 - 소수가 아닌 수 2
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string k, ns;
    cin >> k;
    int len = k.length();
    ns = k.substr(2, len - 2);
    cout << "YES\n";
    cout << stoi(ns) << ' ' << int(pow(10, len - 2));

    return 0;
}