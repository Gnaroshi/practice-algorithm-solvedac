#include <iostream>
using namespace std;

int main(void)
{
    long n; cin>>n;
    long m; cin>>m;

    if (n - m < 0)
    {
        cout<<-1 * (n - m);
    }
    else
    {
        cout<<n - m;
    }
    return 0;
}