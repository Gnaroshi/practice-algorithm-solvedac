#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    int num1; cin>>num1;
    int num2; cin>>num2;
    int num3; cin>>num3;
    int cases = 0;
    if (num1 == num2 && num2 == num3)
    {
        cases = 1;
    }
    else if (num1 == num2)
    {
        cases = 2;
    }
    else if (num2 == num3)
    {
        cases = 3;
    }
    else if (num3 == num1)
    {
        cases = 2;
    }
    
    if(cases == 0)
    {
        cout<<max(num1, max(num2, num3))*100;
    }
    else if(cases == 1)
    {
        cout<<10000 + num1 * 1000;
    }
    else if(cases == 2)
    {
        cout<<1000 + num1 * 100; 
    }
    else if(cases == 3)
    {
        cout<<1000 + num2 * 100;         
    }

    return 0;
}