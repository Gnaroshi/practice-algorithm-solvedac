// problem: Travelling Salesman
// id: 5089
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, wk = 1;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        set<string> s;
        string city;
        cin.ignore();
        while (n--)
        {
            getline(cin, city);
            s.insert(city);
        }
        cout << "Week " << wk++ << ' ' << s.size() << '\n';
    }

    return 0;
}