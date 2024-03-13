#include <iostream>
using namespace std;

int main(void)
{
    int a;
    int b;
    bool isEnd = true;
    while(!(cin>>a>>b).eof())
    {
        // if (a == b)
        // {
        //     if (a == 0)
        //     {
        //         break;
        //     }
        // }
        cout<<a + b<<endl;
    }
    return 0;
}