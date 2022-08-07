#include <bits/stdc++.h>
/*#include <graphics.h>
#include <iostream.h>
#include <math.h>
#include <dos.h>*/
using namespace std;
int main( )
{
float x,y,x1,y1,x2,y2,dx,dy,step,xIncrement,yIncrement;
//int i,gd=DETECT,gm;
int i;

//initgraph(&gd,&gm,"c:\\turboc3\\bgi");

cout<<"Enter the value of x1 and y1 : ";
cin>>x1>>y1;
cout<<"Enter the value of x2 and y2: ";
cin>>x2>>y2;

dx=abs(x2-x1);
dy=abs(y2-y1);

if(dx>dy)
step=dx;
else
step=dy;

xIncrement=(x2-x1)/step;
yIncrement=(y2-y1)/step;

x=x1;
y=y1;

i=1;
cout<<"x"<<"   "<<"y\n";
while(i<=step+1)
{
//putpixel(x,y,5)

cout<<(int)(x+0.5)<<" "<<(int)(y+0.5)<<"\n"; //round=(int)(a+0.5)
x=x+xIncrement;
y=y+yIncrement;
i=i+1;

//delay(100);
}


//closegraph();
return 0;
}
