                        
#include<graphics.h>
#include<iostream>
#include<dos.h>
#include<conio.h>
int main()
{
int gd=DETECT;
int gm;
 initgraph(&gd,&gm,"tc:\bgi");
 int maximumx=getmaxx();

for(int i=0,color=5;i<=maximumx;i++,color++)
{
//ROAD
 setcolor(RED);        
 line(0,350,maximumx,350);
 line(0,355,maximumx,355);


//SUN
 setcolor(YELLOW);
 circle(50+i,100,50);
 outtextxy(40+i,100,"Sun");   
                          
//BUS STOP BOARD
 setcolor(WHITE);
 rectangle(500,350,510,260);
 rectangle(450,260,560,230);
 setcolor(CYAN);                                              
 outtextxy(480,240,"BUS STOP");
 
//BUS
 if(i<=320)
 {
  setcolor(GREEN);
  rectangle(80+i,330,170+i,280);
  setcolor(CYAN);
  circle(100+i,340,10);                 
  circle(150+i,340,10);
 }
 else
 {//BUS
  setcolor(LIGHTBLUE);
  rectangle(400,330,490,280);
  setcolor(WHITE);
  circle(420,340,10);                 
  circle(470,340,10);
 }

//MOVING CLOUDS
 setcolor(BLUE);
 rectangle(0+i*3,50,50+i*3,40);
  setcolor(GREEN);
 rectangle(100+i*3,70,150+i*3,60);        
  setcolor(RED)  ;
 rectangle(200+i*3,90,250+i*3,80);
  setcolor(CYAN)   ;
 rectangle(-400+i*3,110,-300+i*3,100);
 setcolor(GREEN)   ;
 rectangle(-500+i*3,170,-400+i*3,160);

//AEROPLANE
  setcolor(WHITE);
 line(450-i,150,455-i,155);
 line(450-i,150,455-i,145);    
 line(455-i,145,485-i,145);
 line(455-i,155,485-i,155);
 line(485-i,145,505-i,85);
 line(485-i,155,505-i,215);
 line(505-i,85,505-i,145) ;
 line(505-i,215,505-i,155);
 line(505-i,145,545-i,145);
 line(505-i,155,545-i,155);
 line(545-i,145,550-i,130);
 line(545-i,155,550-i,170);
 line(550-i,130,550-i,145);
 line(550-i,170,550-i,155);
 line(550-i,145,555-i,145);
 line(550-i,155,555-i,155);
 line(555-i,145,555-i,155);


 if(i==0)
 {
 setcolor(BLUE);
 outtextxy(200,400,"PRESS ANY KEY TO START THE ANIMATION!!");
 getch() ;
 }

 delay(20);
 if(i<maximumx)
 cleardevice();
 }


 getch();
 closegraph();
 return 0;

 }
