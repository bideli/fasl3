#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
    int n;
    double m1,m2,m3,nf;
    const double e=2.71828182;
    const double pi=3.14159265;
    cout<<"\n Enter n:";
    cin>>n;
    m1= pow(n,n)* pow(e,-n);
    m2=(2*n)+(1.0/3.0);
    m3= sqrt(m2*pi);
    nf=m1*m3;
    cout<<"\n"<<n<<"!  equals approximately in Gosper\'s formula is: "<<nf<< endl;
    cout<<n<<"!  The accurate equals is "<<ceil(nf)<<endl;
    getch();
    return 0;
}
