#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<string> v;
    string s;
    while (true)
    {
        cin >> s;
        v.push_back(s);
        if (s == "e")
            break;
    }
    for (auto i : v)
        cout << "https://www.acmicpc.net/problem/" << i << '\n';
    return 0;
}
