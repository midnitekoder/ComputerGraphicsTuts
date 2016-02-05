

#include<graphics.h>

 
main()
{
   int gd = DETECT, gm, x, y, color, angle = 0;
   struct arccoordstype a, b;
 
   initgraph(&gd, &gm, NULL);
   delay(2000);
 /*
   while(angle<=360)
   {
      setcolor(BLACK);
      arc(getmaxx()/4,getmaxy()/4,angle,angle+2,100);
      setcolor(RED);
      getarccoords(&a);
      circle(a.xstart,a.ystart,25);
      setcolor(BLACK);
      arc(getmaxx()/2,getmaxy()/2,angle,angle+2,150);
      getarccoords(&a);
      setcolor(GREEN);
      circle(a.xstart,a.ystart,25);
      angle = angle+5;
      delay(50);
   }*/
      arc(300,100,5,55,100);
      circle(100,100,100);
      line(100,100,600,600);
 
   getch();
   closegraph();
   return 0;
}