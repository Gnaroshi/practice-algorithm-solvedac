// problem: O Fortuna
// id: 26505
// time taken:
#include <bits/stdc++.h>
using namespace std;

int P[] = {5, 7, 13, 23, 17, 19, 23, 37, 61, 67, 61, 71, 47};
int L[] = {3, 7, 11, 13, 17, 29, 23, 43, 41, 73, 59, 47, 89};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n)
    {
        cout << "N = " << n << " FORTUNATE = " << P[n - 2] << " LESS = " << L[n - 2] << "\n";
    }

    return 0;
}
