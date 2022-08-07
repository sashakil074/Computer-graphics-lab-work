// 1) Line is drawn from left to right.
// 2) x1 < x2 and y1 < y2
// 3) Positive slope: Slope of the line is between 0 and 1.
//    We draw a line from lower left to upper
#include<bits/stdc++.h>
using namespace std;

int main(){

float x,y,x0,y0,x1,y1,step,dx,dy,pk;
int i;

cout<<"Enter the value of first point (x0,y0): ";
cin>>x0>>y0;
cout<<"Enter the value of second point (x1,y1): ";
cin>>x1>>y1;

x=x0;
y=y0;

dx=abs(x1-x0);
dy=abs(y1-y0);

pk=2*dy-dx; //initial value of decision parameter pk


cout<<"pk     "<<"x     y"<<endl;
for(i=0;i<=dx;i++)
{
    cout<<pk<<"      "<<(int) x<<"     "<<(int) y<<endl;
    if(pk<0){
        x=x+1;
        y=y;
        pk=pk+2*dy;
    }
    else{
        x=x+1;
        y=y+1;
        pk=pk+2*dy-2*dx;
    }

}
return 0;
}

