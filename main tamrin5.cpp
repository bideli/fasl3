#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
    double a, b, h,volume,area ;
    cout << "\n Enter the abscissa:";
    cin >> a;
    cout << "\n Enter the breadth:";
    cin >> b;
    cout << "\n Enter the high:";
    cin >> h;
    volume = a * b * h;
    area = (2 * a * b) + (2 * b * h) + (2 * a * h);
    cout << "\n The space you need for each box about:" << ceil(volume);
    cout << "\n The gift paper you need for each box about:" << ceil(area);
    getch();
    return 0;
}