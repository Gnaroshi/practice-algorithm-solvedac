#include <bits/stdc++.h>
using namespace std;

void unordered_set_example()
{
    unordered_set<int> s;
    s.insert(-10);
    s.insert(100);
    s.insert(15);
    s.insert(-10);
    cout << s.erase(100) << '\n';
    cout << s.erase(20) << '\n';
    if (s.find(15) != s.end())
        cout << "15 in s\n";
    else
        cout << "15 not in s\n";
    cout << s.size() << '\n';
    cout << s.count(50) << '\n';
    for (auto e : s)
        cout << e << ' ';
    cout << '\n';
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_set_example();

    return 0;
}