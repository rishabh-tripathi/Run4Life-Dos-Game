#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<time.h>
#include<dos.h>
#include<bios.h>
#include<string.h>
#include<stdlib.h>

union REGS i,o;
struct SREGS s;

int c[32]={
		0xffff,0xffff,0xe003,0xf003,0xf803,0xfc03,
		0xfc03,0xfc03,0xf803,0xf043,0xe0e3,0xc1f3,
		0x83fb,0x07ff,0x8fff,0xdfff,
		0x0000,0x0000,0x1ffc,0x0804,0x0404,0x0204,
		0x0104,0x0204,0x0444,0x08a4,0x1114,0x220c,
		0x4404,0x8800,0x5000,0x2000,
	};

show()
{
i.x.ax=1;
int86(0x33,&i,&o);
}

hide()
{
i.x.ax=2;
int86(0x33,&i,&o);
}

moupos(int *button,int *x,int *y)
{
i.x.ax=3;
int86(0x33,&i,&o);
*button=o.x.bx;
*x=o.x.cx;
*y=o.x.dx;
}

change(int *shape)
{
i.x.ax=9;
i.x.bx=0;
i.x.cx=0;
i.x.dx=(unsigned)shape;
segread(&s);
s.es=s.ds;
int86x(0x33,&i,&i,&s);
}



main()
{
int gd=VGA,gm=VGAHI,errorcode,area,i,j,play=1,rndplay,rac,r,ch,chh,n=1,speed=151,sp=1,si=1,carx,cary,gear=0,aspeed,booster=100,drumx,drumy,drumv,drumx1,drumy1,spp,coin=200;
int life_=10;
int fire=20;
char info[4];
int soun;
char *buff;
char *fir;
char *boost;
int mouse=23;
int x,y,button;
initgraph(&gd,&gm,"");
errorcode = graphresult();
if (errorcode != grOk)
{
   printf("Graphics error: %s\n", grapherrormsg(errorcode));
   printf("Press any key to halt:");
   getch();

   exit(1);
}

cleardevice();
setcolor(BLUE);
setfillstyle(8,BLUE);
bar(100,50,500,150);
setfillstyle(1,BLUE);
bar(120,110,250,135);
bar(350,110,480,135);
setcolor(YELLOW);
rectangle(120,110,250,135);
rectangle(350,110,480,135);
rectangle(100,50,500,150);
settextstyle(3,0,3);
outtextxy(105,55,"Do you want to watch the story..");
settextstyle(2,0,6);
outtextxy(155,110,"_Yes_");
outtextxy(390,110,"_No_");
	change(c);
	show();

	while(mouse==23)
	{
	show();
	moupos(&button,&x,&y);
	if((button & 1)==1)
	{
	if(x>120 && x<250 && y>110 && y<135)
	{
	system("c:\\Run4Life\\data\\R4Lstory.exe");
	mouse=1;
	}
	else if(x>350 && x<480 && y>110 && y<135)
	{
	mouse=1;
	}
	}
	}


system("c:\\Run4Life\\data\\R4L0100.exe");
system("c:\\Run4Life\\data\\R4L0101.exe");
system("c:\\Run4Life\\data\\R4L0102.exe");
system("c:\\Run4Life\\data\\R4L0103.exe");
system("c:\\Run4Life\\data\\R4L0104.exe");
system("c:\\Run4Life\\data\\R4L01sc.exe");
system("c:\\Run4Life\\data\\R4L0201.exe");
system("c:\\Run4Life\\data\\R4L0202.exe");
system("c:\\Run4Life\\data\\R4L0203.exe");
system("c:\\Run4Life\\data\\R4L0204.exe");
system("c:\\Run4Life\\data\\R4L02sc.exe");
system("c:\\Run4Life\\data\\R4L0301.exe");
system("c:\\Run4Life\\data\\R4L0302.exe");
system("c:\\Run4Life\\data\\R4L0303.exe");
system("c:\\Run4Life\\data\\R4L0304.exe");
system("c:\\Run4Life\\data\\R4L03sc.exe");
system("c:\\Run4Life\\data\\R4L0401.exe");
system("c:\\Run4Life\\data\\R4L0402.exe");
system("c:\\Run4Life\\data\\R4L0403.exe");
system("c:\\Run4Life\\data\\R4L0404.exe");
system("c:\\Run4Life\\data\\R4L04sc.exe");
system("c:\\Run4Life\\data\\R4L0501.exe");
system("c:\\Run4Life\\data\\R4L0502.exe");
system("c:\\Run4Life\\data\\R4L0503.exe");
system("c:\\Run4Life\\data\\R4L0504.exe");
system("c:\\Run4Life\\data\\R4L05sc.exe");
system("c:\\Run4Life\\data\\R4L0601.exe");
system("c:\\Run4Life\\data\\R4L0602.exe");
system("c:\\Run4Life\\data\\R4L0603.exe");
system("c:\\Run4Life\\data\\R4L0604.exe");
system("c:\\Run4Life\\data\\R4L0605.exe");
system("c:\\Run4Life\\data\\R4L06sc.exe");
system("c:\\Run4Life\\data\\end.exe");
}