#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
    double ave;
    cout<<"Enter your average:";
    cin>>ave;
    cout<<"\n The integer of your average is:"<<floor(ave);
    cout<<"\n The float of your average is:"<<ave-floor(ave);
    getch();
    return 0;
}