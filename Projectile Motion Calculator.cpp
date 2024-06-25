#include<iostream>
#include<cmath>
#include<math.h>
#define g 9.81
#define pi 3.14159265
using  namespace std;
int main()
{
    cout<<"In order to calculate the Horizontal and Vertical Motion, We will need some requirements"<<endl;
    double v,a,x0,y0,x,y,t,vx,vy,xf,yf;
    cout<<"Please enter the initial velocity of the particle"<<endl;
    cin>>v;
    cout<<"Please enter the angle of launch"<<endl;
    cin>>a;
    cout<<"Please enter the initial position on X-axis"<<endl;
    cin>>x0;
    cout<<"Please enter the initial position on Y-axis"<<endl;
    cin>>y0;
    cout<<"Please enter the time"<<endl;
    cin>>t;
    vx=(cos(a*pi/180))*v;
    vy=(sin(a*pi/180))*v;
    x=x0+(vx*t);
    y=y0+(vy*t)-(0.5*g*t*t);
    xf=vx;
    yf=sqrt((vy*vy)-(2*g*(y-y0)));
    cout<<"The initial velocity on X-axis="<<vx<<"m/s"<<endl;
    cout<<"The initial velocity on Y-axis="<<vy<<"m/s"<<endl;
    cout<<"The final position on X-axis="<<x<<endl;
    cout<<"The final position on Y-axis="<<y<<endl;
    cout<<"The final velocity on X-axis="<<xf<<"m/s"<<endl;
    cout<<"The final velocity equal the initial velocity on X-axis"<<endl;
    cout<<"The final velocity on Y-axis="<<yf<<"m/s"<<endl;
    return 0;


}
