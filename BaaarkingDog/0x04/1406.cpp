// #include <iostream>

// using namespace std;

// int main(void)
// {

//     int cursor = 0;
//     char arr[600001] = {0};
    
//     string temp; cin>>temp;    
//     int size = temp.length();
//     cursor = size;

//     for (int i = 0; i < size; i++) arr[i] = temp[i];

//     char command;
//     int commands; cin>>commands;

//     for (int i = 0; i < commands; i++)
//     {
//         cin>>command;

//         if(command == 'P')
//         {
//             char character; cin>>character;
//             if (cursor != size)
//             {
//                 for (int i = size + 1; i > cursor; i--)
//                 {
//                     arr[i] = arr[i - 1];
//                 }
//             }
//             arr[cursor] = character;
//             cursor++;
//             size++;
//         }
        
//         else if(command == 'D')
//         {
//             if(cursor == size) continue;
//             else cursor++;
//         }
//         else if(command == 'B')
//         {
//             if(cursor == 0) continue;
//             else
//             {
//                 for (int i = cursor - 1; i < size - 1; i++)
//                 {
//                     arr[i] = arr[i + 1];
//                 }
//                 arr[size] = 0;
//                 cursor--;
//                 size--;
//             }
//         }
//         else if(command == 'L')
//         {
//             if(cursor == 0) continue;
//             else cursor--;

//         }
//     }
//     for (int i = 0; i < size; i++) cout<<arr[i];
//     cout<<"\n";
//     return 0;
// }
// 시간초과

#include <iostream>
#include <list>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);   
    string s; cin>>s;
    int commands; cin>>commands;
    list<char> lst;
    for (int i = 0; i < s.length(); i++)
    {
        lst.push_back(s[i]);
    }

    char command;
    char commandChar;

    list<char>::iterator cursor = lst.end();
        
    while(commands--)
    {
        cin>>command;
        if(command == 'P')
        {
            cin>>commandChar;
            lst.insert(cursor, commandChar);
        }
        else if(command == 'L')
        {
            if(cursor != lst.begin()) cursor--;
        }
        else if(command == 'D')
        {
            if(cursor != lst.end()) cursor++;
        }
        else if(command == 'B')
        {
            if(cursor != lst.begin())
            {
                cursor--;
                cursor = lst.erase(cursor);
            }
        }
        // cout<<"cursor: "<<*cursor<<"\n";
        // for(list<char>::iterator temp = lst.begin(); temp != lst.end(); temp++)
        // {
        //     cout<<*temp;
        // }
        // cout<<"\n";
    }

    for (auto c : lst)
    {
        cout<<c;
    }
    
    return 0;

}