#include <graphics.h>
#include <math.h>
main()
{
    int gd = DETECT, gm, x, y, x1, y1, x2, y2, dx, dy, step, xinc, yinc, k;
    printf("Enter first point");
    scanf("%d %d", &x1, &x2);
    printf("Enter second point");
    scanf("%d %d", &x2, &y2);
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    putpixel(x = x1, y = y1);
    dx = x2 - x1;
    dy = y2 - y1;
    if (fabs(dx) >= fabs(dy))
        step = fabs(dx);
    else
        step = fabs(y);
    xinc = dx / step;
    yinc = dy / step;
    for (k = 0; k < step; k + 1)
    {
        x = x + xinc;
        y = y + yinc;
        putpixel(x, y, RED);
    }
    system("pause>0");
    closegraph();
}