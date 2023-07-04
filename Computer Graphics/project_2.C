#include <graphics.h>
long xf = 285, yf = 155;
float S = 1;
void Scenery();
void scline(float,float,float,float);
void screctangle(float,float,float,float);
main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    while (S <= 7)
    {
        cleardevice();
        scline(150, 50, 350, 50);
        scline(350, 50, 400, 100);
        scline(150, 50, 200, 100);
        scline(150, 50, 80, 120);
        scline(100, 100, 100, 200);
        scline(100, 200, 200, 200);
        scline(80, 120, 100, 120);
        screctangle(200, 100, 400, 200);
        screctangle(130, 130, 170, 170);
        screctangle(250, 130, 320, 200);
        scline(320, 130, 305, 140);
        scline(305, 140, 305, 200);
        scline(250, 130, 265, 140);
        scline(265, 140, 265, 200);
        scline(100, 200, 90, 210);
        scline(90, 210, 190, 210);
        scline(190, 210, 200, 200);
        scline(190, 210, 410, 210);
        scline(400, 200, 410, 210);
        setfillstyle(1, 12);
        floodfill(163, 55, WHITE);
        setfillstyle(12, 4);
        floodfill(82, 119, WHITE);
        setfillstyle(11, 7);
        floodfill(101, 101, WHITE);
        setfillstyle(8, 2);
        floodfill(131, 131, WHITE);
        setfillstyle(3, 10);
        floodfill(251, 121, WHITE);
        setfillstyle(5, 12);
        floodfill(310, 145, WHITE);
        setfillstyle(5, 12);
        floodfill(260, 145, WHITE);
        setfillstyle(1, 6);
        floodfill(150, 205, WHITE);
        setfillstyle(1, 6);
        floodfill(250, 205, WHITE);
        if (S == 1)
            delay(1500);
        S = S + 0.2;
        delay(60);
    }
    cleardevice();
    Scenery();
    system("pause>PrasannaSujalUjen");
}
void scline(float x1, float y1, float x2, float y2)
{
    line(x1*S+xf*(1-S),y1*S+yf*(1-S),x2*S+xf*(1-S),y2*S+yf*(1-S));
}
void screctangle(float x1, float y1, float x2, float y2)
{
    rectangle(x1*S+xf*(1-S),y1*S+yf*(1-S),x2*S+xf*(1-S),y2*S+yf*(1-S));
}
void Scenery()
{
    line(10, 10, 600, 10);
    line(600, 10, 600, 450);
    line(600, 450, 10, 450);
    line(10, 450, 10, 10);
    line(10, 250, 180, 50);
    line(180, 50, 380, 270);
    line(360, 250, 600, 250);
    line(450, 250, 600, 150);
    {
        int poly[8] = {10, 250, 180, 50, 380, 270, 10, 280};
        setfillstyle(1, 6);
        fillpoly(4, poly);
    }
    line(315, 200, 400, 100);
    line(400, 100, 520, 200);
    line(10, 280, 380, 270);
    {
        int poly[10]={315,200,400,100,520,200,450,250,360,250};
        setfillstyle(12, 6);
        fillpoly(5, poly);
    }
    {
        int poly[6]={450,250,600,250,600,150};
        setfillstyle(1, 6);
        fillpoly(3, poly);
    }
    line(420, 250, 500, 300);
    line(500, 300, 400, 370);
    line(400, 370, 500, 370);
    line(500, 370, 290, 450);
    line(500, 300, 500, 325);
    line(500, 325, 440, 340);
    line(500, 370, 500, 400);
    line(500, 400, 390, 410);
    {
        int poly[24]={420,250,600,250,600,450,290,450,390,410,500,400,500,370,400,370,440,340,500,325,500,300,420,250};
        setfillstyle(1, 1);
        fillpoly(12, poly);
    }
    {
        int poly[18]={10,280,380,270,360,250,420,250,500,300,400,370,500,370,290,450,10,450};
        setfillstyle(9, 2);
        fillpoly(9, poly);
    }
    {
        int poly[16]={10,10,10,250,180,50,315,200,400,100,520,200,600,150,600,10};
        setfillstyle(1, 9);
        fillpoly(8, poly);
    }
    arc(315, 195, 40, 140, 30);
    setfillstyle(1, 14);
    floodfill(317, 190, WHITE);
    line(285, 160, 265, 120);
    line(295, 155, 285, 130);
    line(300, 150, 290, 110);
    line(308, 150, 305, 115);
    line(315, 150, 320, 110);
    line(320, 150, 328, 105);
    line(330, 150, 340, 110);
    line(340, 155, 360, 110);
}