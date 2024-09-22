#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI\\");
    rectangle(20, 10, 620, 460);
    outtextxy(230, 20, "Block Diagram of Computer");
    rectangle(200, 50, 450, 400);
    outtextxy(245,70,"Central Procecing Unit");

    rectangle(50, 200, 150, 250);
    outtextxy(75,220,"Input");
    line(150,225,200,225);
    line(200,225,195,220);
    line(200,225,195,230);

    rectangle(500, 200, 600, 250);
    outtextxy(525,220,"Output");
    line(450,225,500,225);
    line(500,225,495,220);
    line(500,225,495,230);


    rectangle(250, 100, 400, 150);
    outtextxy(280, 120, "Control Unit");
    line(290,150,290,200);
    line(290,200,295,195);
    line(290,200,285,195);

    line(360,150,360,200);
    line(360,150,355,155);
    line(360,150,365,155);

    rectangle(250, 200, 400, 250);
    outtextxy(270, 215, "Arithmatic And");
    outtextxy(280, 230, "Logical Unit");
    line(290,250,290,300);
    line(290,300,285,295);
    line(290,300,295,295);

    line(360,250,360,300);
    line(360,250,355,255);
    line(360,250,365,255);

    rectangle(250, 300, 400, 350);
    outtextxy(279,320,"Memory Unit");
    // line(200,200,400,200);
    getch();
    closegraph();
    return 0;
}