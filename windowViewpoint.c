#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
    float xwmin,xwmax,ywmax,ywmin;
    float xvmin,xvmax,yvmax,yvmin;
    float x[10],y[10],yv,xv,sx,sy;
    int gd=DETECT,gm,i;

    printf("\n enter window port coordinates:\n(xwmin,ywmin,xwmax,ywmax): ");
    scanf("%f%f%f%f",&xwmin,&ywmin,&xwmax,&ywmax);
    printf("\n enter view port coordinates:\n(xvmin,yvmin,xvmax,yvmax): ");
    scanf("%f%f%f%f",&xvmin,&yvmin,&xvmax,&yvmax);
    
    sx=((xvmax-xvmin)/(xwmax-xwmin));
    sy=((yvmax-yvmin)/(ywmax-xwmin));

    initgraph(&gd,&gm,NULL);
    outtextxy(80,30,"window port");
    rectangle(xwmin,ywmin,xwmax,ywmax);
    setcolor(3);
line(100,200,300,200);
 
line(100,400,300,400);
 
line(100,400,100,200);
 
line(300,400,300,200);
 
line(300,200,500,200);
 
line(300,400,500,400);
 
line(500,200,500,400);
 
line(170,250,270,250);
 
line(170,200,270,200);
 
line(170,250,170,400);
 
line(270,250,270,400);
 
line(200,50,400,50);
 
line(400,50,500,200);
 
line(300,200,200,50);
 
line(100,200,200,50);
    getch();
    cleardevice();
	line(xvmin+((100-xwmin)*sx),yvmin+((200-ywmin)*sy),xvmin+((300-xwmin)*sx),yvmin+((200-ywmin)*sy));
 
line(xvmin+((100-xwmin)*sx),yvmin+((400-ywmin)*sy),xvmin+((300-xwmin)*sx),yvmin+((400-ywmin)*sy));
 
line(xvmin+((100-xwmin)*sx),yvmin+((400-ywmin)*sy),xvmin+((100-xwmin)*sx),yvmin+((200-ywmin)*sy));
 
line(xvmin+((300-xwmin)*sx),yvmin+((400-ywmin)*sy),xvmin+((300-xwmin)*sx),yvmin+((200-ywmin)*sy));
 
line(xvmin+((300-xwmin)*sx),yvmin+((200-ywmin)*sy),xvmin+((500-xwmin)*sx),yvmin+((200-ywmin)*sy));
 
line(xvmin+((300-xwmin)*sx),yvmin+((400-ywmin)*sy),xvmin+((500-xwmin)*sx),yvmin+((400-ywmin)*sy));
 
line(xvmin+((500-xwmin)*sx),yvmin+((200-ywmin)*sy),xvmin+((500-xwmin)*sx),yvmin+((400-ywmin)*sy));
 
line(xvmin+((170-xwmin)*sx),yvmin+((250-ywmin)*sy),xvmin+((270-xwmin)*sx),yvmin+((250-ywmin)*sy));
 
line(xvmin+((170-xwmin)*sx),yvmin+((200-ywmin)*sy),xvmin+((270-xwmin)*sx),yvmin+((200-ywmin)*sy));
 
line(xvmin+((170-xwmin)*sx),yvmin+((250-ywmin)*sy),xvmin+((170-xwmin)*sx),yvmin+((400-ywmin)*sy));
 
line(xvmin+((270-xwmin)*sx),yvmin+((250-ywmin)*sy),xvmin+((270-xwmin)*sx),yvmin+((400-ywmin)*sy));
 
line(xvmin+((200-xwmin)*sx),yvmin+((50-ywmin)*sy),xvmin+((400-xwmin)*sx),yvmin+((50-ywmin)*sy));
 
line(xvmin+((400-xwmin)*sx),yvmin+((50-ywmin)*sy),xvmin+((500-xwmin)*sx),yvmin+((200-ywmin)*sy));
 
line(xvmin+((300-xwmin)*sx),yvmin+((200-ywmin)*sy),xvmin+((200-xwmin)*sx),yvmin+((50-ywmin)*sy));
 
line(xvmin+((100-xwmin)*sx),yvmin+((200-ywmin)*sy),xvmin+((200-xwmin)*sx),yvmin+((50-ywmin)*sy));






    outtextxy(150,10,"view port");
    rectangle(xvmin,yvmin,xvmax,yvmax);

    getch();
}
