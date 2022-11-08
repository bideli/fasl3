#include <iostream>
#include <conio.h>
using namespace std;
void show();
void totalcost();
int main()
{
    show();
    cout<<"\n The total cost of each house in 5 years:";
    totalcost();
    getch();
    return 0;
}
void show()
{
    cout<<"\n           Initial House Cost         Annual Fuel Cost          Tax Rate";
    cout<<"\n  House1:        $175                       $2500                 0.025";
    cout<<"\n  House2:        $200                       $2800                 0.025";
    cout<<"\n  House3:        $210                       $2050                 0.020";
    cout<<"\n\n computing total cost for 5 years:  Initial House Cost + Annual Fuel Cost*5 + Tax Rate * Initial House Cost*5 ";
}
void totalcost()
{
    double house1,house2,house3;
    house1=175+(2500*5)+(5*175*0.025);
    house2=200+(2800*5)+(5*200*0.025);
    house3=210+(2050*5)+(5*210*0.020);
    cout<<"\n House1:"<<house1<<"$";
    cout<<"\n House2:"<<house2<<"$";
    cout<<"\n House3:"<<house3<<"$";
}