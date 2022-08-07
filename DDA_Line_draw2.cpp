//DDA Line draw
#include<bits/stdc++.h>
using namespace std;

int main(){

float x,y,x0,y0,x1,y1,step,xIncrement,yIncrement,dx,dy;
int i;

cout<<"Enter the value of starting point (x0,y0): ";
cin>>x0>>y0;
cout<<"Enter the value of ending point (x1,y1): ";
cin>>x1>>y1;

dx=abs(x1-x0);
dy=abs(y1-y0);

if(dx>dy)
    step=dx;
else
    step=dy;

xIncrement=(x1-x0)/step;
yIncrement=(y1-y0)/step;

x=x0;
y=y0;

cout<<"x     y"<<endl;

for(i=0;i<=step;i++){
    cout<<(int)(x+0.5)<<"    "<<(int)(y+0.5)<<endl;//round=(int)(a+0.5)

    x=x+xIncrement;
    y=y+yIncrement;


}
return 0;
}
