#include <iostream>
using namespace std;

int main(void)
{
    int a; cin>>a;
    int b; cin>>b;

    if(a > b)
    {
        cout<<">";
    }
    else if (a < b)
    {
        cout<<"<";
    }
    else
    {
        cout<<"==";
    }
    return 0;
}