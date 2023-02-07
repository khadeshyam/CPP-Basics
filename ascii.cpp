#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';
    cout<<"ASCII value of "<<ch<<" is "<<int(ch)<<endl;

    ch = 'a';
    cout<<"ASCII value of "<<ch<<" is "<<int(ch)<<endl;

    ch = 'B';
    cout<<"ASCII value of "<<ch<<" is "<<int(ch)<<endl;

    ch = 'b';
    cout<<"ASCII value of "<<ch<<" is "<<int(ch)<<endl;

    cout<<"difference of charactors (a , A) "<<'a'-'A'<<endl;
    cout<<"difference of charactors (b , B) "<<'a'-'A'<<endl;
    cout<<"difference of charactors (c , C) "<<'c'-'C'<<endl;

    cout<<"difference of charactors ( A, a ) "<<'A'-'a'<<endl;
    cout<<"difference of charactors ( B, b ) "<<'B'-'b'<<endl;
    cout<<"difference of charactors ( C, c ) "<<'C'-'c'<<endl;

    cout<<"convert B to Lowercase "<<char('B'+('a'-'A'))<<endl;
    cout<<"convert b to Uppercase "<<char('b'+('A'-'a'))<<endl;



}
