#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    long a; cin>>a;
    long b; cin>>b;
    int counter = 0;
    
    a = floor(a/100) * 100;
    while((a%b)!=0)
    {
        if (a%b == 0)
        {
            break;
        }
        else
        {
            a++;
            counter++;
        }
        if(counter == 100)
        {
            break;
        }
    }
    long temp = a%100;
    if (temp < 10)
    {
        cout<<"0"<<temp;
    }
    else
    {
        cout<<temp;
    }

    return 0;
}