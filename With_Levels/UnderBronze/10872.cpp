#include <iostream>
using namespace std;

int main(void)
{
    int n; cin>>n;
    int fac = 1;
    for (int i = 1; i < n + 1; i++) fac *= i;
    cout<<fac<<"\n";
    return 0;
}