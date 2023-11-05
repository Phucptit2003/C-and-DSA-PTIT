#include<bits/stdc++.h>
#include <graphics.h>
#include <stdlib.h>
using namespace std;

int main(){
	int dr=0, md = 0, gd=0,gm=0;
    initgraph(&dr,&md,"");
    initgraph(&gd,&gm,""); 
    int p3[14]={50,240,20,150,50,60,145,60,175,150,145,240,50,240};
    setfillstyle(1,WHITE);
    drawpoly(7,p3);
    fillpoly(7,p3);
	for (int i=0; i<=4; i++ )
	{
		settextstyle(i,4,11); 
		setbkcolor(WHITE); 
		setcolor(20); 
		outtextxy(170,165,"Le Dinh Phuc");
		getch();
		cleardevice();
	}
	closegraph();
	return 0;
}

