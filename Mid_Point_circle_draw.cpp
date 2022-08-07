
#include<bits/stdc++.h>
using namespace std;

int main(){

float r,x,y,x0,y0,pk,xc,yc;
int i;

cout<<"Enter the value of r: ";
cin>>r;
//cout<<"Enter the value of center point (xc,yc): ";
//cin>>xc>>yc;

//for center=origin (x,y)=(0,r)
x=0;
y=r;

if(r-(int) r== 0.0)
    pk=1-r; //initial value of decision parameter pk
else
    pk=(5.0/4.0)-r;


cout<<"pk     "<<"x     y"<<endl;
while(x<=y)
{
    cout<<pk<<"      "<<(int) x<<"     "<<(int) y<<endl;
    if(pk<0){
        x=x+1;
        y=y;
        pk=pk+(2*x)+1;
    }
    else{
        x=x+1;
        y=y-1;
        pk=pk+(2*x)+1-(2*y);
    }

}
return 0;
}

