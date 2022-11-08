#include <iostream>
#include <conio.h>
using namespace std;
void circle();
void rectangle();
void triangle();
int main()
{
    circle();
    triangle();
    rectangle();
    cout<<"\n\n";
    triangle();
    circle();
    rectangle();
    getch();
    return 0;
}
void circle()
{
    cout<<"\n\n    * ";
    cout<<"\n *     *";
    cout<<"\n    **";
}
void rectangle()
{
    cout<<"\n\n ___________";
    cout<<"\n|           |";
    cout<<"\n|           |";
    cout<<"\n|___________|";
}
void triangle()
{
    cout<<"\n\n   /\\";
    cout<<"\n  /  \\";
    cout<<"\n /    \\";
    cout<<"\n/______\\";
}