#include <iostream>
using namespace std;

int main(void)
{
    string temp; cin>>temp;
    if (temp == "A+") cout<<"4.3\n";
    else if (temp == "A0") cout<<"4.0\n";
    else if (temp == "A-") cout<<"3.7\n";
    else if (temp == "B+") cout<<"3.3\n";
    else if (temp == "B0") cout<<"3.0\n";
    else if (temp == "B-") cout<<"2.7\n";
    else if (temp == "C+") cout<<"2.3\n";
    else if (temp == "C0") cout<<"2.0\n";
    else if (temp == "C-") cout<<"1.7\n";
    else if (temp == "D+") cout<<"1.3\n";
    else if (temp == "D0") cout<<"1.0\n";
    else if (temp == "D-") cout<<"0.7\n";
    else cout<<"0.0\n";
    return 0;
}