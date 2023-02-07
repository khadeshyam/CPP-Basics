#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<< "Enter the charactor" << endl;
    char ch ;
    cin>>ch;
    if (isalpha(ch))
    {
        cout << ch << " is an alphabetic letter." << endl;
    }
    
    else if (isdigit(ch))
    {
        cout << ch << " is a digit." << endl;
    }
    else
    {
        cout << ch << " is neither a digit nor an alphabet" << endl;
    }

    return 0;
}
