#include <iostream>
using namespace std;

int main(void)
{
    int val1, val2;
    cin>>val1>>val2;
    int val13 = val1 / 100;
    int val12 = (val1 - val13 * 100)/ 10;
    int val11 = val1 % 10;

    int val23 = val2 / 100;
    int val22 = (val2 - val23 * 100)/ 10;
    int val21 = val2 % 10;

    int rval1 = val13 + val12 * 10 + val11 * 100;
    int rval2 = val23 + val22 * 10 + val21 * 100;
    
    if (rval1 > rval2)
    {
        cout<<rval1;
    }
    else
    {
        cout<<rval2;
    }       
    
    return 0;
}