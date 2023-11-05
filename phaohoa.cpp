#include<bits/stdc++.h> 
#include<graphics.h>
#include<dos.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main() { 
	int x[101],y[101]; 
	int mh=0,mode=0,i,n; 
	char *p[101]; 
	initgraph(&mh,&mode,"");
	if (graphresult()!=0) exit(1);
	setcolor(BLUE);
	for (i=1;i<=2000;++i) 
	{ 
		  putpixel(rand()%getmaxx()+10, rand()%getmaxy()+10, rand()%25); 
	} 
	for (i=1;i<=100;++i) 
	{ 
		x[i]=rand()%getmaxx()+10; 
		y[i]=rand()%getmaxy()+10; 
		if (x[i]<0) x[i]=0; 
		if (y[i]<0) y[i]=0; 
		n=imagesize(x[i],y[i],x[i]+50,y[i]+50); 
		p[i]=(char*)malloc(n); 
		getimage(x[i],y[i],x[i]+50,y[i]+50,p[i]);
	}

	do{
		for (i=1;i<=100;++i) 
		{ 
			setfillstyle(SOLID_FILL,i%10+1);
	 		pieslice(x[i]+25,y[i]+25,0,360,5); 
		} 
		delay(500); 
	    for (i=100;i>=1;--i)
	        putimage(x[i],y[i],p[i],COPY_PUT);
	    delay(800); 
		} while(!kbhit()); 
	getch(); 
//	getch();
	closegraph(); 
} 



