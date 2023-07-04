//Midpoint algorithm to draw ellipse (LAB-5) :

#include <graphics.h>
main()
{
    int gd = DETECT, gm;
    float xc, yc, rx, ry, x, y, pk;
    system("cls");  
    printf("Enter coordinates of centre of ellipse : ");
    scanf("%f %f", &xc, &yc);
    printf("Enter x-radius and y-radius : ");
    scanf("%f %f", &rx, &ry);
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    x = 0;
    y = ry;
    pk = ry * ry - rx * rx * ry + rx * rx / 4;
    do
    {
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        x++;
        if (pk < 0)
            pk = pk + 2 * ry * ry * x + ry * ry;
        else
        {
            y--;
            pk = pk + 2 * ry * ry * x - 2 * rx * rx * y + ry * ry;
        }
    } while (ry * ry * x <= rx * rx * y);
    pk = ry * ry * (x + 0.5) * (x + 0.5) + rx * rx * (y - 0.5) * (y - 0.5) - rx * rx * ry * ry;
    do
    {
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        y--;
        if (pk > 0)
            pk = pk + rx * rx - 2 * rx * rx * y;
        else
        {
            x++;
            pk = pk + 2 * ry * ry * x - 2 * rx * rx * y + rx * rx;
        }
    } while (y >= 0);
    system("pause>0");
    closegraph();
}