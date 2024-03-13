// problem: 지수연산
// id: 2052
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    printf("%.*f", n, double(pow(0.5, n)));

    return 0;
}