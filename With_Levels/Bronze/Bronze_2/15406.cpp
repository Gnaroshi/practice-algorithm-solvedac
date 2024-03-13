// problem: Check the Check
// id: 15406
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int p, c, tot = 0;
    while (true)
    {
        getline(cin, s);
        if (s == "TOTAL")
        {
            cin >> p;
            if (tot >= p)
                cout << "PAY";
            else
                cout << "PROTEST";
            return 0;
        }
        cin >> p >> c;
        tot += p * c;
        cin.ignore();
    }

    return 0;
}