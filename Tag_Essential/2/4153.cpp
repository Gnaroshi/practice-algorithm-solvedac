#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    int a, b, c;
    int temp;
    bool isZeores = true;
    while(isZeores)
    {
        cin>>a>>b>>c;
        temp = max(a, max(b, c));
        if ((a == 0) && (b == 0) && (c == 0))
        {
            isZeores = false;
            break;
        }
        else
        {
            if (a*a + b*b == temp*temp)
            {
                cout<<"right"<<endl;
            }
            else if (c*c + b*b == temp*temp)
            {
                cout<<"right"<<endl;
            }
            else if (a*a + c*c == temp*temp)
            {
                cout<<"right"<<endl;
            }
            else
            {
                cout<<"wrong"<<endl;
            }
        }

    }

    return 0;

}