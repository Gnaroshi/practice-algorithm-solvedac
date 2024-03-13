// problem: 이제는 더 이상 물러날 곳이 없다
// id: 30455
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << ((n % 2) ? "Goose" : "Duck");

    return 0;
}