#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
int main()
{
   int gd=0,gm=0, maloi; // gd : graphdriver, gm: graphmode,
   initgraph(&gd,&gm,""); // khoi dong do hoa
if ( (maloi=graphresult()) != 0)
{
  printf("khong the khoi dong do hoa \n");
  printf("ma loi : %d \n",maloi);
  printf("Le dinh phuc : %s",grapherrormsg(maloi));
  printf("\n an phim bat ky de thoat");
  getch();
  exit(1);
}
bar(5,5,300,300);
getch();
closegraph();
return 0;
}
