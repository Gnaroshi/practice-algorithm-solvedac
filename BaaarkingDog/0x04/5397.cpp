#include <iostream>
#include <list>

using namespace std;

int main(void)
{
    int tc; cin>>tc;
    while(tc)
    {
        list<char> L;
        list<char> commands;
        string s; cin>>s;
        list<char>::iterator cursor = L.begin();
        for(auto c : s) 
        {
            if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A') || (c >= '0' && c <= '9'))
            {
                L.insert(cursor, c);
            }
            else if(c == '<')
            {
                if(cursor != L.begin()) cursor--;
            }
            else if(c == '>')
            {
                if(cursor != L.end()) cursor++;
                
            }
            else if(c == '-')
            {
                if(cursor != L.begin())
                {
                    cursor--;
                    cursor = L.erase(cursor);
                }
            }
        }   
        
        for(auto c : L) cout<<c;
        cout<<"\n";
        tc--;
    }

    return 0;

}