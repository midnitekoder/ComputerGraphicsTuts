#include<stdio.h>
#include<graphics.h>
#include<math.h>

 

void drawcircles(int xc, int yc, int r)
{
	setcolor(YELLOW);
	circle(xc,yc,r);
	//circle(xc,yc,r+5);
}
void main()
{
	int xc=50,yc=200,r=35;
	int x[15],y[15];
	int x1[15],y1[15];
	int xc1=175,yc1=200;
	int handleHeight=150;
	double angle=0,theta;
	int i,a;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	a=xc+r;
	int legDistance=10;
	
		/*while(a<=400)
		{
			if(legDistance==10)
				legDistance=0;
			else
				legDistance=10;

			theta=M_PI*angle/180;
			cleardevice();
			setcolor(3);
			line(xc,yc,xc1,yc1);
			line(xc1,yc1,xc1-50,handleHeight);
			line(xc+50,handleHeight+r-30, xc+50, handleHeight+r+20);
			line(xc+50, handleHeight+r, xc1-50, handleHeight);
			line(xc+50,handleHeight+r+20,xc+40-legDistance,handleHeight+r+30);
			line(xc+50,handleHeight+r+20,xc+60+legDistance,handleHeight+r+30);
			drawcircles(xc+50,handleHeight-10, r-20);
			
			drawcircles(xc,yc,r);
			drawcircles(xc1,yc1,r);
			for(i=0;i<6;i++)
			{
				theta=M_PI*angle*3/180;
				x[i]=xc+r*cos(theta);
				y[i]=yc+r*sin(theta);
				angle+=20;
				line(xc,yc,x[i],y[i]);
				x1[i]=xc1+r*cos(theta);
				y1[i]=yc1+r*sin(theta);
				line(xc1,yc1,x1[i],y1[i]);
			}
			angle+=2; xc+=2; a=xc+r;
			xc1+=2;
			delay(100);
		}*/
		xc=50,yc=200,r=35;

		legDistance=legDistance*2;
		angle=0;
		theta=M_PI*angle/180;
			cleardevice();
			setcolor(3);
			xc=xc*2;
			xc1=xc1*2;
			yc=yc*2;
			yc1=yc1*2;
			handleHeight=handleHeight*2;
			r=r*2;
			a=xc+r;
			line(xc,yc,xc1,yc1);
			line(xc1,yc1,xc1-50*2,handleHeight);
			line(xc+50*2,handleHeight+r-30*2, xc+50*2, handleHeight+r+20*2);
			line(xc+50*2, handleHeight+r, xc1-50*2, handleHeight);
			line(xc+50*2,handleHeight+r+20*2,xc+40*2-legDistance,handleHeight+r+30*2);
			line(xc+50*2,handleHeight+r+20*2,xc+60*2+legDistance,handleHeight+r+30*2);
			drawcircles(xc+50*2,handleHeight-10*2, r-20*2);
			
			drawcircles(xc,yc,r);
			drawcircles(xc1,yc1,r);
			for(i=0;i<6;i++)
			{
				theta=M_PI*angle*3/180;
				x[i]=xc+r*cos(theta);
				y[i]=yc+r*sin(theta);
				angle+=20;
				line(xc,yc,x[i],y[i]);
				x1[i]=xc1+r*cos(theta);
				y1[i]=yc1+r*sin(theta);
				line(xc1,yc1,x1[i],y1[i]);
			}
			angle+=2; xc+=2; a=xc+r;
			xc1+=2;
	
	getch();
	closegraph();
}