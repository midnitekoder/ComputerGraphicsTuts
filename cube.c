   #include<stdio.h>
#include<graphics.h>
#include<math.h>




int main()
{
	int gd=DETECT,gm,x1,x2,y1,y2,x,y;
        int i ;
float r = 60,t;
 t=3.14*r/180;
//abs(x1*cos(t)-y1*sin(t))
//abs(x1*sin(t)+y1*cos(t))
/*initgraph(&gd,&gm,NULL);
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
delay(200);*/

/*initgraph(&gd,&gm,NULL);
setcolor(LIGHTRED);
	line(100+i,100+i,200+i,100+i);
	line(100+i,100+i,50+i,186+i);
        line(200+i,100+i,150+i,186+i);
line(50+i,185+i,150+i,185+i);
floodfill(101+i,101+i,LIGHTRED);
setcolor(YELLOW);
line(50+i,186+i,150+i,186+i);
line(50+i,186+i,50+i,286+i);
line(150+i,186+i,150+i,286+i);
line(149+i,186+i,149+i,286+i);
line(50+i,286+i,150+i,286+i);
floodfill(51+i,200+i,YELLOW);
setcolor(BLUE);
 line(201+i,101+i,151+i,187+i);
line(200+i,100+i,200+i,200+i);
line(151+i,186+i,151+i,286+i);
line(150+i,286+i,200+i,200+i);
floodfill(155+i,201+i,BLUE);
setcolor(WHITE);
setlinestyle(DASHED_LINE,0,NORM_WIDTH);
line(100+i,100+i,100+i,200+i);
line(100+i,200+i,50+i,286+i);
line(100+i,200+i,200+i,200+i);
i++;
delay(200);*/
//cleardevice();

initgraph(&gd,&gm,NULL);
setcolor(RED);
line(abs(100*cos(t)-100*sin(t)),abs(100*sin(t)+100*cos(t)),abs(200*cos(t)-100*sin(t)),abs(200*sin(t)+100*cos(t)));
	//line(100,100,50,186);
line(abs(100*cos(t)-100*sin(t)),abs(100*sin(t)+100*cos(t)),abs(50*cos(t)-186*sin(t)),abs(50*sin(t)+186*cos(t)));
  //      line(200,100,150,186);
line(abs(200*cos(t)-100*sin(t)),abs(200*sin(t)+100*cos(t)),abs(150*cos(t)-186*sin(t)),abs(150*sin(t)+186*cos(t)));
//line(50,185,150,185);
line(abs(50*cos(t)-185*sin(t)),abs(50*sin(t)+185*cos(t)),abs(150*cos(t)-185*sin(t)),abs(150*sin(t)+185*cos(t)));
floodfill(abs(102*cos(t)-102*sin(t)),abs(102*sin(t)+102*cos(t)),RED);
setcolor(BLUE);
//line(50,186,150,186);
line(abs(50*cos(t)-186*sin(t)),abs(50*sin(t)+186*cos(t)),abs(150*cos(t)-186*sin(t)),abs(150*sin(t)+186*cos(t)));
//line(50,186,50,286);
line(abs(50*cos(t)-186*sin(t)),abs(50*sin(t)+186*cos(t)),abs(50*cos(t)-286*sin(t)),abs(50*sin(t)+286*cos(t)));
//line(150,186,150,286);
line(abs(150*cos(t)-186*sin(t)),abs(150*sin(t)+186*cos(t)),abs(150*cos(t)-286*sin(t)),abs(150*sin(t)+286*cos(t)));
//line(149,186,149,286);
line(abs(149*cos(t)-186*sin(t)),abs(149*sin(t)+186*cos(t)),abs(149*cos(t)-286*sin(t)),abs(149*sin(t)+286*cos(t)));
//line(50,286,150,286);
line(abs(50*cos(t)-286*sin(t)),abs(50*sin(t)+286*cos(t)),abs(150*cos(t)-286*sin(t)),abs(150*sin(t)+286*cos(t)));
floodfill(abs(51*cos(t)-200*sin(t)),abs(51*sin(t)+200*cos(t)),BLUE);
setcolor(GREEN);
// line(201,100,151,186);
line(abs(201*cos(t)-100*sin(t)),abs(201*sin(t)+100*cos(t)),abs(151*cos(t)-186*sin(t)),abs(151*sin(t)+186*cos(t)));
//line(200,100,200,200);
line(abs(200*cos(t)-100*sin(t)),abs(200*sin(t)+100*cos(t)),abs(200*cos(t)-200*sin(t)),abs(200*sin(t)+200*cos(t)));
//line(151,186,151,286);
line(abs(151*cos(t)-186*sin(t)),abs(151*sin(t)+186*cos(t)),abs(151*cos(t)-286*sin(t)),abs(151*sin(t)+286*cos(t)));
//line(150,286,200,200);
line(abs(150*cos(t)-286*sin(t)),abs(150*sin(t)+286*cos(t)),abs(200*cos(t)-200*sin(t)),abs(200*sin(t)+200*cos(t)));
floodfill(abs(152*cos(t)-200*sin(t)),abs(152*sin(t)+200*cos(t)),GREEN);
setcolor(WHITE);
setlinestyle(DASHED_LINE,0,NORM_WIDTH);
//line(100,100,100,200);
line(abs(100*cos(t)-100*sin(t)),abs(100*sin(t)+100*cos(t)),abs(100*cos(t)-200*sin(t)),abs(100*sin(t)+200*cos(t)));
//line(100,200,50,286);
line(abs(100*cos(t)-200*sin(t)),abs(100*sin(t)+200*cos(t)),abs(50*cos(t)-286*sin(t)),abs(50*sin(t)+286*cos(t)));
//line(100,200,200,200);
line(abs(100*cos(t)-200*sin(t)),abs(100*sin(t)+200*cos(t)),abs(200*cos(t)-200*sin(t)),abs(200*sin(t)+200*cos(t)));
 while(i<200)
{

	
}





	getch();
	closegraph();
}
