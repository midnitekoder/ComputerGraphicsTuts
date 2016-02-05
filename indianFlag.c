#include<stdio.h>
#include<graphics.h>
#include<math.h>
#define PI 3.14

void cir(int x, int y, int r)
{
	int i,j;
	for(i=x-r;i<=x+r;i++)
	{
		j=y+sqrt(r*r-(i-x)*(i-x));
		putpixel(i,j,3);
		j=y-sqrt(r*r-(i-x)*(i-x));
		putpixel(i,j,3);

	}
}

int main()
{
	int gd=DETECT,gm,x1,x2,y1,y2,x,y;
	int I;
	x1=100;
	x2=500;
	y1=100;
	y2=100;
	initgraph(&gd,&gm,NULL);
	setcolor(LIGHTRED);
	line(x1,y1,x2,y2);
	line(x1,y1+100,x2,y2+100);
	line(x1,y1,x1,y1+100);
	line(x2,y2,x2,y2+100);
	floodfill(150,150,2);

	setcolor(WHITE);
line(x1,y1+101,x2,y2+101);
	line(x1,y1+200,x2,y2+200);
	line(x1,y1+101,x1,y1+200);
	line(x2,y2+101,x2,y2+200);
	floodfill(150,250,2);

setcolor(GREEN);
	line(x1,y1+201,x2,y2+201);
	line(x1,y1+300,x2,y2+300);
	line(x1,y1+201,x1,y1+300);
	line(x2,y2+201,x2,y2+300);
	floodfill(150,350,2);
	//floodfill(150,250, 2);
	setcolor(BLUE);
	cir(x1+200,y1+150,50);
	for(I=0;I<=360;I+=15)
 {
   x=50*cos(I*PI/180);
   y=50*sin(I*PI/180);
   line(300,250,300+x,250-y);
 }
	getch();
	closegraph();
}
