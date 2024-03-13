#include <iostream>
using namespace std;

int main(void)
{
    long a; cin>>a;
    long b; cin>>b;
    long c; cin>>c;
    long sold = 0;

    if ((c - b) <= 0)
    {
        cout<<-1;
        return 0;
    }
    else
    {
        cout<<a/(c-b) + 1;
    }
    return 0;
}
