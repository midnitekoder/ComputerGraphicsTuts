
#include<stdio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
int i,r,x,y,xc,yc;
float d;


printf("Enter Radius\n");
scanf("%d",&r);
printf("Enter Center of circle\n");
 
scanf("%d",&xc);
scanf("%d",&yc);
initgraph(&gd,&gm,NULL);
d=1.25-r;
x=0;
y=r;
do
{
if(d<0)
{
 
x=x+1;
d=d+2*x+1;
}
else
{
 
x=x+1;
y=y-1;
d=d+2*x-2*y+10;
}
 putpixel(xc+x,yc+y,5);
putpixel(xc-y,yc-x,5);
putpixel(xc+y,yc-x,5);
putpixel(xc-y,yc+x,5);
putpixel(xc+y,yc+x,5);
putpixel(xc-x,yc-y,5);
putpixel(xc+x,yc-y,5);
putpixel(xc-x,yc+y,5);
}
while(x<y);
getch();
}