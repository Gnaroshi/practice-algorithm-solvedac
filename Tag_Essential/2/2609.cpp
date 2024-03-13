#include <iostream>
using namespace std;

int main(void)
{
    int var1, var2; cin>>var1>>var2;

    int gcd = 1;
    int lcm = 1;

    int tempV1 = var1;
    int tempV2 = var2;
    int temp;

    bool isDiv = true;
    while(isDiv)
    {
        if (tempV1 % tempV2 != 0)
        {   
            temp = tempV1;
            tempV1 = tempV2;
            tempV2 = temp % tempV2;
        }
        else
        {
            gcd = tempV2;
            isDiv = false;
        }
    }
    lcm = (var1 * var2) / gcd;

    cout<<gcd<<endl;
    cout<<lcm<<endl;

    return 0;

}