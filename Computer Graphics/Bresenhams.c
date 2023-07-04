#include <graphics.h>
main()
{
	int x, y, x1, y1, x2, y2, P, dx, dy, gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	printf("Enter coordinates of first point  :");
	scanf("%d %d", &x1, &y1);
	printf("Enter coordinates of second point :");
	scanf("%d %d", &x2, &y2);
	dx = x2 - x1;
	dy = y2 - y1;
	putpixel(x = x1, y = y1, RED);
	if (dx > dy)
	{
		P = 2 * dy - dx;
		while (x <= x2)
		{
			if (P < 0)
			{
				P = P + 2 * dy;
				x++;
				putpixel(x, y, RED);
			}
			else
			{
				P = P + 2 * dy - 2 * dx;
				x++;
				y++;
				putpixel(x, y, RED);
			}
		}
	}
	else
	{
		P = 2 * dx - dy;
		while (y <= y2)
		{
			if (P < 0)
			{
				P = P + 2 * dx;
				y++;
				putpixel(x, y, RED);
			}
			else
			{
				P = P + 2 * dx - 2 * dy;
				x++;
				y++;
				putpixel(x, y, RED);
			}
		}
	}
	system("pause>0");
	closegraph();
}