
#include<stdio.h>

#include<graphics.h>



void lineDraw(int x1,int y1,int x2,int y2)
{
 int x,y,dx,dy,dx1,dy1,px,py,xe,ye,i;
 dx=x2-x1;
 dy=y2-y1;
 dx1=fabs(dx);
 dy1=fabs(dy);
 px=2*dy1-dx1;
 py=2*dx1-dy1;
 if(dy1<=dx1)
 {
  if(dx>=0)
  {
   x=x1;
   y=y1;
   xe=x2;
  }
  else
  {
   x=x2;
   y=y2;
   xe=x1;
  }
  putpixel(x,y,10);
  for(i=0;x<xe;i++)
  {
   x=x+1;
   if(px<0)
   {
    px=px+2*dy1;
   }
   else
   {
    if((dx<0 && dy<0) || (dx>0 && dy>0))
    {
     y=y+1;
    }
    else
    {
     y=y-1;
    }
    px=px+2*(dy1-dx1);
   }
   delay(0);
   putpixel(x,y,10);
  }
 }
 else
 {
  if(dy>=0)
  {
   x=x1;
   y=y1;
   ye=y2;
  }
  else
  {
   x=x2;
   y=y2;
   ye=y1;
  }
  putpixel(x,y,10);
  for(i=0;y<ye;i++)
  {
   y=y+1;
   if(py<=0)
   {
    py=py+2*dx1;
   }
   else
   {
    if((dx<0 && dy<0) || (dx>0 && dy>0))
    {
     x=x+1;
    }
    else
    {
     x=x-1;
    }
    py=py+2*(dx1-dy1);
   }
   delay(0);
   putpixel(x,y,10);
  }
 }
}




void circleDraw(int r, int xc, int yc)
{
      int i,x,y;
float d;


//printf("Enter Radius\n");
//scanf("%d",&r);
//printf("Enter Center of circle\n");
 
//scanf("%d",&xc);
//scanf("%d",&yc);

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
}


void main()
{
      int gd = DETECT, gm;
      int dx, dy, p, end, r, xc, yc,xdrift;
      float x1, x2, y1, y2, x, y;
   /*
      printf("Enter Value of X1: ");
      scanf("%f", &x1);
      printf("Enter Value of Y1: ");
      scanf("%f", &y1);
      printf("Enter Value of X2: ");
      scanf("%f", &x2);
      printf("Enter Value of Y2: ");
      scanf("%f", &y2);
      */
         initgraph(&gd, &gm, NULL);
         r=50;
         xc=100;
         yc=100;

         
         x1=100;
         y1=150;
         x2=100;
         y2=350;
         lineDraw(x1,y1,x2,y2);
         circleDraw(r,xc,yc);
         x1=25;
         y1=200;
         x2=175;
         y2=200;
         lineDraw(x1,y1,x2,y2);
         x1=100;
         y1=350;
         x2=150;
         y2=550;
         lineDraw(x1,y1,x2,y2);
         x1=50;
         y1=550;
         x2=100;
         y2=350;
         lineDraw(x1,y1,x2,y2);


         xdrift=200;
         x1=100;
         y1=150;
         x2=100;
         y2=350;
         lineDraw(x1+xdrift,y1,x2+xdrift,y2);
         circleDraw(r,xc+xdrift,yc);
         x1=100;
         y1=200;
         x2=25;
         y2=100;
         lineDraw(x1+xdrift,y1,x2+xdrift,y2);

         x1=100;
         y1=200;
         x2=175;
         y2=100;
         lineDraw(x1+xdrift,y1,x2+xdrift,y2);

         x1=100;
         y1=350;
         x2=150;
         y2=550;
         lineDraw(x1+xdrift,y1,x2+xdrift,y2);
         x1=50;
         y1=550;
         x2=100;
         y2=350;
         lineDraw(x1+xdrift,y1,x2+xdrift,y2);


          xdrift=400;
         x1=100;
         y1=150;
         x2=100;
         y2=350;
         lineDraw(x1+xdrift,y1,x2+xdrift,y2);
         circleDraw(r,xc+xdrift,yc);
         x1=100;
         y1=200;
         x2=25;
         y2=300;
         lineDraw(x1+xdrift,y1,x2+xdrift,y2);

         x1=100;
         y1=200;
         x2=175;
         y2=300;
         lineDraw(x1+xdrift,y1,x2+xdrift,y2);

         x1=100;
         y1=350;
         x2=150;
         y2=550;
         lineDraw(x1+xdrift,y1,x2+xdrift,y2);
         x1=50;
         y1=550;
         x2=100;
         y2=350;
         lineDraw(x1+xdrift,y1,x2+xdrift,y2);


         


      
      getch();
      closegraph();
}
