#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

void main ()
{
  float area, circum, rad;
  clrscr ();
  cout<<"enter the radius of the circle:";
  cin>>rad;
  area= 3.14*rad*rad;
  circum= 2*3.14*rad;
  cout<<"area of the circle="<<area<<endl;
  cout<<"circumference="<<circum<<endl;
  getch ();
}
