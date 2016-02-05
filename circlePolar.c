#include<graphics.h>
#include<stdio.h>
#include<math.h>

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
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	int x=50,y=50,r=10;
	cir(x,y,r);
	getch();
	closegraph();

}