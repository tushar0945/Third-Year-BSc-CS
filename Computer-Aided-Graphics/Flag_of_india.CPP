#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI\\");

outtextxy(400,250,"FLAG OF INDIA");
outtextxy(430,270,"MADE WITH LOVE");
outtextxy(460,290,"BY _tushar__45._");
setfillstyle(SOLID_FILL,23);
bar(200,80,210,450);
bar(120,450,290,500);
line(195,90,200,90);
circle(193,90,5);
circle(193,90,2);
line(193,90,200,350);
line(200,351,210,351);
line(200,355,210,355);
line(200,353,210,353);
circle(201,352,4);
circle(209,352,4);
line(205,352,195,360);
line(205,352,197,365);
line(205,352,215,360);
line(205,352,213,365);


setfillstyle(SOLID_FILL,6);
bar(210,90,370,130);

setfillstyle(SOLID_FILL,WHITE);
bar(210,130,370,170);

setfillstyle(SOLID_FILL,GREEN);
bar(210,170,370,210);

setlinestyle(SOLID_LINE,1,NORM_WIDTH);
setcolor(1);

circle(290,150,20);

line(290,150,290,130);
line(290,150,298,132);
line(290,150,304,136);
line(290,150,308,142);

line(290,150,282,132);
line(290,150,276,136);
line(290,150,272,142);


//line(290,150,279,135);
//line(290,150,274,140);
//line(290,150,270,145);

line(290,150,290,170);
line(290,150,282,168);
line(290,150,276,164);
line(290,150,272,158);


line(290,150,310,150);
line(290,150,308,158);
line(290,150,304,164);
line(290,150,298,168);

line(290,150,270,150);


getch();
closegraph();
return 0;
}