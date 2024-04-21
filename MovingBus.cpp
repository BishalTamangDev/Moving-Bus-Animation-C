#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>

int main()
{
	int i,x=200,y=400;
	int gd=DETECT,gm;
	initwindow(640,480);

	for(i=0;i<640;i+=2)
	{		
		setfillstyle(1,BLACK);
		floodfill(10,10,YELLOW);
		setlinestyle(0,0,1);

		//Border
		circle(x/2-30+i,y/2,10);
		arc(x/2-30+i,y/2,0,180,12);
		circle(x/2+50+i,y/2,10);
		arc(x/2+50+i,y/2,0,180,12);
		line(x/2-77+i,y/2-40,x/2+76+i,y/2-40);
		line(x/2-80+i,y/2,x/2-42+i,y/2);
		line(x/2-18+i,y/2,x/2+38+i,y/2);
		line(x/2+62+i,y/2,x/2+80+i,y/2);

		//bus outer part
		arc(x/2+i,y/2-15,350,18,81);
		arc(x/2+i,y/2-15,162,190,81);
		
		//hoodie
		rectangle(x/2-72+i,y/2-45,x/2+30+i,y/2-40);

		//window
		rectangle(x/2-72+i,y/2-33,x/2+40+i,y/2-25);
		arc(x/2+50+i,y/2,10,90,17);
		line(x/2+50+i,y/2-17,x/2+50+i,y/2-33);
		line(x/2+50+i,y/2-33,x/2+72+i,y/2-33);
		line(x/2+72+i,y/2-33,x/2+72+i,y/2-3);
		line(x/2+72+i,y/2-3,x/2+68+i,y/2-3);

		//roadline
		setlinestyle(3,0,1);
		line(0-i,y/2+12,1200+x-i,y/2+12);

		//bars
		setlinestyle(0,0,1);
		rectangle(x/2-50-i,y/2,x/2-47-i,y/2+12);
		rectangle(x/2-150-i,y/2,x/2-147-i,y/2+12);
		rectangle(x/2-250-i,y/2,x/2-247-i,y/2+12);
		rectangle(x/2+50-i,y/2,x/2+47-i,y/2+12);
		rectangle(x/2+150-i,y/2,x/2+147-i,y/2+12);
		rectangle(x/2+250-i,y/2,x/2+247-i,y/2+12);
		rectangle(x/2+350-i,y/2,x/2+347-i,y/2+12);
		rectangle(x/2+450-i,y/2,x/2+447-i,y/2+12);
		rectangle(x/2+550-i,y/2,x/2+547-i,y/2+12);
		rectangle(x/2+650-i,y/2,x/2+647-i,y/2+12);
		rectangle(x/2+750-i,y/2,x/2+747-i,y/2+12);
		rectangle(x/2+850-i,y/2,x/2+847-i,y/2+12);
		rectangle(x/2+950-i,y/2,x/2+947-i,y/2+12);
		rectangle(x/2+1050-i,y/2,x/2+1047-i,y/2+12);
		rectangle(x/2+1150-i,y/2,x/2+1147-i,y/2+12);
	}
	getch();
	closegraph();
	return 0;
}
