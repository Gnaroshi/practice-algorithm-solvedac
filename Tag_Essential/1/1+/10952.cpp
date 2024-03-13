#include <iostream>
using namespace std;

int main(void)
{
    bool isEnd = true;
    while(isEnd)
    {
        int a; cin>>a;
        int b; cin>>b;
        if (a == b)
        {
            if (a == 0)
            {
                break;
            }
        }
        cout<<a + b<<endl;
    }
    return 0;
}