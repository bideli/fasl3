#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
double time(double theta,double Distance,double velocity);
double height(double theta,double Distance,double velocity);
int main()
{
    double theta,Distance ,velocity;
    cout<<"\n Enter theta:";
    cin>>theta;
    cout<<"\n Enter distance:";
    cin>>Distance;
    cout<<"\n Enter velocity:";
    cin>>velocity;
    cout<<"\n The time is:"<< time( theta, Distance, velocity)<<" sec";
    cout<<"\n The height is:"<< height( theta, Distance, velocity)<<" ft";
    getch();
    return 0;
}

double time(double theta,double Distance,double velocity)
{
    double time;
    time=Distance/(velocity* cos(theta));
    return time;
}
double height(double theta,double Distance,double velocity)
{
    const double g=32.17;
    double height,time;
    time=Distance/(velocity* cos(theta));
    height=(velocity* sin(theta)*time)-((g*time*time)/2);
    return height;
}