#include<stdio.h>
#include<graphics.h>

int main()

	{

	    int gd=DETECT, gm;

	                           //case 3:
float sx;
	    int pentagon[12]={340,150, 320,110, 360,70, 400,110, 380,150, 340,150};
             int x1,x2,x3,y1,y2,y3,nx1,nx2,nx3,ny1,ny2,ny3,c;
            int sy,xt,yt,i,r;
            float t;
	     printf("\n 1.Transaction\n 2.Rotation\n 3.Scalling\n 4.exit");
            printf("Enter your choice:");
            scanf("%d",&c);

            
            /*xt = 30; yt = 30;
            int pentagon1[12]={340+xt,150+yt, 320+xt,110+yt, 360+xt,70+yt, 400+xt,110+yt, 380+xt,150+yt, 340+xt,150+yt};
                                    drawpoly(6,pentagon1);

                                    getch();*/

	     /*printf("\n 1.Transaction\n 2.Rotation\n 3.Scalling\n 4.exit");
            printf("Enter your choice:");
            scanf("%d",&c);*/
            switch(c)
            {
                        case 1:
                                  
                                   for(i = 1;i<200;i++)
				{
                                     
                                     initgraph(&gd, &gm,NULL);
                                    
                                    int pentagon[12]={340+i,150+i, 320+i,110+i, 360+i,70+i, 400+i,110+i, 380+i,150+i, 340+i,150+i};
                                    drawpoly(6,pentagon);
                                    delay(100);
                                    cleardevice();
                                    
                                    }
                                    getch();
                                    closegraph();
                                   break;

                        case 2:
                                    printf("\n Enter the angle of rotation");
                                    scanf("%d",&r);
                                    t=3.14*r/180;
                                   /* nx1=abs(x1*cos(t)-y1*sin(t));
                                    ny1=abs(x1*sin(t)+y1*cos(t));
                                    nx2=abs(x2*cos(t)-y2*sin(t));
                                    ny2=abs(x2*sin(t)+y2*cos(t));
                                    nx3=abs(x3*cos(t)-y3*sin(t));
                                    ny3=abs(x3*sin(t)+y3*cos(t));
                                    line(nx1,ny1,nx2,ny2);
                                    line(nx2,ny2,nx3,ny3);
                                    line(nx3,ny3,nx1,ny1);*/
   initgraph(&gd, &gm,NULL);
                                     int pentagon[12]={abs(340*cos(t)-150*sin(t)),abs(340*sin(t)+150*cos(t)), abs(320*cos(t)-110*sin(t)),abs(320*sin(t)+110*cos(t)), abs(360*cos(t)-70*sin(t)),abs(360*sin(t)+70*cos(t)), abs(400*cos(t)-110*sin(t)),abs(400*sin(t)+110*cos(t)), abs(380*cos(t)-150*sin(t)),abs(380*sin(t)+150*cos(t)), abs(340*cos(t)-150*sin(t)),abs(340*sin(t)+150*cos(t))};
               drawpoly(6,pentagon);
                                    //delay(100);
                                    //cleardevice();
                                    getch();
                                   break;

case 3:
                                    printf("\n Enter the scalling factor");
                                    scanf("%f",&sx);
                                   /* nx1=x1*sx;
                                    ny1=y2*sy;
                                    nx2=x2*sx;
                                    ny2=y2*sy;
                                    nx3=x3*sx;
                                    ny3=y3*sy;
                                    line(nx1,ny1,nx2,ny2);
                                    line(nx2,ny2,nx3,ny3);
                                    line(nx3,ny3,nx1,ny1);*/
initgraph(&gd, &gm,NULL);
     int pentagon1[12]={340*sx,150*sx, 320*sx,110*sx, 360*sx,70*sx, 400*sx,110*sx, 380*sx,150*sx, 340*sx,150*sx};
 drawpoly(6,pentagon1);
                                    //delay(100);
                                    //cleardevice();
                                    getch();
break;
                                  //  getch();

                        case 4:
                                    break;
                        default:
                                    printf("Enter the correct choice");
                                    }
	   
	     

	   getch();

	    closegraph();

	    return 0;

	}
