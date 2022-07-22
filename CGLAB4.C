#include <graphics.h>
main()
{
	int gd = DETECT, gm, r, xc, yc, Pk, x, y;
	printf("Enter radius of circle:");
	scanf("%d", &r);
	printf("Enter coordinated of center of circle:");
	scanf("%d %d", &xc, &yc);
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	x = 0;
	y = r;
	Pk = 5 / 4 - r;
	do
	{
		delay(30);
		putpixel(xc + x, yc + y, RED);
		putpixel(xc + x, yc - y, RED);
		putpixel(xc - x, yc + y, RED);
		putpixel(xc - x, yc - y, RED);
		putpixel(xc + y, yc + x, RED);
		putpixel(xc + y, yc - x, RED);
		putpixel(xc - y, yc + x, RED);
		putpixel(xc - y, yc - x, RED);
		if (Pk < 0)
			Pk = Pk + 2 * x + 3;
		else
		{
			y--;
			Pk = Pk + 2 * x - 2 * y + 5;
		}
		x++;
	} while (x <= y);
	system("pause>0");
	closegraph();
}