#include <iostream>
using namespace std;

int main(void)
{
    int a; cin>>a;
    int leap = 0;
    if (((a % 4 == 0) && (a % 100 != 0)) || a % 400 == 0)
    {
        leap = 1;
    }
    cout<<leap<<endl;

    return 0;

}