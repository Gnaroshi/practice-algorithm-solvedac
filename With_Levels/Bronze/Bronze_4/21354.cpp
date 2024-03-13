// problem: Äpplen och päron
// id: 21354
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, p;
    cin >> a >> p;
    int at = a * 7;
    int pt = p * 13;
    if (at == pt)
        cout << "lika";
    else if (at > pt)
        cout << "Axel";
    else
        cout << "Petra";

    return 0;
}