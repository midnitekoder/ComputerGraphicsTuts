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



line(100,100,200,100);
	line(100,100,50,186);
        line(200,100,150,186);
line(50,185,150,185);
floodfill(101,101,RED);
setcolor(BLUE);
line(50,186,150,186);
line(50,186,50,286);
line(150,186,150,286);
line(149,186,149,286);
line(50,286,150,286);
floodfill(51,200,BLUE);
setcolor(GREEN);
 line(201,100,151,186);
line(200,100,200,200);
line(151,186,151,286);
line(150,286,200,200);
floodfill(152,200,GREEN);
setcolor(WHITE);
setlinestyle(DASHED_LINE,0,NORM_WIDTH);
line(100,100,100,200);
line(100,200,50,286);
line(100,200,200,200);




initgraph(&gd,&gm,NULL);
setcolor(RED);
	line(100+i,100+i,200+i,100+i);
	line(100+i,100+i,50+i,186+i);
        line(200+i,100+i,150+i,186+i);
line(50+i,185+i,150+i,185+i);
floodfill(101+i,101+i,RED);
setcolor(BLUE);
line(50+i,186+i,150+i,186+i);
line(50+i,186+i,50+i,286+i);
line(150+i,186+i,150+i,286+i);
line(149+i,186+i,149+i,286+i);
line(50+i,286+i,150+i,286+i);
floodfill(51+i,200+i,BLUE);
setcolor(GREEN);
 line(201+i,101+i,151+i,187+i);
line(200+i,100+i,200+i,200+i);
line(151+i,186+i,151+i,286+i);
line(150+i,286+i,200+i,200+i);
floodfill(155+i,201+i,GREEN);
setcolor(WHITE);
setlinestyle(DASHED_LINE,0,NORM_WIDTH);
line(100+i,100+i,100+i,200+i);
line(100+i,200+i,50+i,286+i);
line(100+i,200+i,200+i,200+i);
i++;
delay(200);
cleardevice();
