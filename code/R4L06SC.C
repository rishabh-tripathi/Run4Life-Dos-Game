#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<time.h>
#include<dos.h>
#include<bios.h>
#include<string.h>
#include<stdlib.h>
#include "c:\R4L\sean.c"
#include "c:\R4L\cars.c"
#include "c:\R4L\car.c"
#include "c:\R4L\functions.c"
#include "c:\R4L\basestru.c"
//#include "c:\R4L\bus.c"
//#include "c:\R4L\truck.c"

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






void main()
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


char *tyre1;
float feul=100;
char *car1buf;
char *pcar4buf;
char *fcar5buf;

int recsize;
FILE *fp;
struct record
{
int coins;
int lifes;
float feuls;
int speeds;
int boosters;
int gear_;
int fire_;
}rec;

recsize=sizeof(rec);

initgraph(&gd,&gm,"c:\bagger");
errorcode = graphresult();
if (errorcode != grOk)
{
   printf("Graphics error: %s\n", grapherrormsg(errorcode));
   printf("Press any key to halt:");
   getch();

   exit(1);
}
fp=fopen("c:\\rruunn.r4l","r");
fread(&rec,recsize,1,fp);
coin=rec.coins;
feul=rec.feuls;
speed=rec.speeds;
booster=rec.boosters;
gear=rec.gear_;
fire=rec.fire_;
life_=rec.lifes;
fclose(fp);
remove("c:\\rruunn.r4l");


if(coin>0 && feul>0 && life_>0)
{
//geting car's image*****************************************

  setcolor(RED);
  settextstyle(8,1,4);
  outtextxy(100,100+60,"You have :  ");

  car(125,75);
  area=imagesize(85,15,165,405);
  buff=malloc(area);
  getimage(85,15,165,405,buff);
  putimage(85,15,buff,XOR_PUT);




setcolor(8);
setfillstyle(1,8);
bar((getmaxx()/2)-130,0,(getmaxx()/2)+130,getmaxy());
roadstru1();
basicstructure1();
sean7();
gears(5);
speedgrp(151-speed);
feulgrp(feul);
coingrp(coin);
boostergrp(booster);
firee(20);
lifee(10);
car(250,400);
setcolor(WHITE);
setfillstyle(1,WHITE);
for(i=-2000;i<+25000;i+=100)
bar((getmaxx()/2)-5,i,(getmaxx()/2)+5,i+80);

delay(1000);

setcolor(getbkcolor());
setfillstyle(1,getbkcolor());
for(i=1;i<320;i++)
{
bar(getmaxx()/2,0,(getmaxx()/2)-i,getmaxy());
bar(getmaxx()/2,0,(getmaxx()/2)+i,getmaxy());
delay(5);
}

delay(1000);



setcolor(YELLOW);
settextstyle(7,0,15);
outtextxy(100-20,100,"R");

settextstyle(7,0,15);
outtextxy(495-20,100,"E");

setcolor(LIGHTBLUE);
settextstyle(7,0,7);
outtextxy(198-20,130,"UN   LIF");

setcolor(BLUE);
setlinestyle(0,0,3);
line(275,155,385,155);
line(275-2,160,385-2,160);
line(275-4,165,385-4,165);
line(275-6,170,385-6,170);
line(275-8,175,385-8,175);
line(275-9,180,385-9,180);
line(275-10,185,385-10,185);
line(275-12,190,385-12,190);

setcolor(YELLOW);
settextstyle(10,0,7);
outtextxy(295,95,"4");


setcolor(LIGHTBLUE);
for(i=1;i<=465;i++)
{
line(80,228,80+i,228);
delay(5);
}
for(i=1;i<20;i++)
{
line(80,228+i,545,228+i);
delay(7);
}
delay(500);
setcolor(LIGHTRED);
settextstyle(8,0,5);
setusercharsize(2,1,1,2);
textdisp1(80,225,"Run For Life",RED,LIGHTRED);

setcolor(LIGHTRED);
settextstyle(8,0,6);
setusercharsize(2,1,1,1);
textdisp1(80,325,"Stage Clear !!!",LIGHTBLUE,BLUE);

delay(2000);
setcolor(getbkcolor());
setfillstyle(1,getbkcolor());
for(i=1;i<=getmaxx();i++)
{
bar(0,0,0+i,getmaxy());
delay(5);
}



for(i=1;i<450;i+=10)
{
putimage(50,getmaxy()-i,buff,XOR_PUT);
delay(5);
putimage(50,getmaxy()-i,buff,XOR_PUT);
}
putimage(50,getmaxy()-450,buff,XOR_PUT);

	setcolor(YELLOW);
	settextstyle(8,0,2);
	outtextxy(200,200,"Coin left : ");
	outtextxy(220,240,"Life left : ");
	outtextxy(200,280,"Fuel left : ");
	outtextxy(220,320,"Booster left : ");
	outtextxy(200,360,"Fire left : ");

	for(i=1;i<=coin;i++)
	{
	setcolor(getbkcolor());
	setfillstyle(1,getbkcolor());
	bar(350,200,400,250);
	setcolor(YELLOW);
	sprintf(info,"%d",i);
	outtextxy(350,200,info);
	sound(500);
	delay(50);
	nosound();
	}
	for(i=1;i<=life_;i++)
	{
	setcolor(getbkcolor());
	setfillstyle(1,getbkcolor());
	bar(400,240,450,290);
	setcolor(YELLOW);
	sprintf(info,"%d",i);
	outtextxy(400,240,info);
	sound(400);
	delay(50);
	nosound();
	}
	for(i=1;i<=feul;i++)
	{
	setcolor(getbkcolor());
	setfillstyle(1,getbkcolor());
	bar(350,280,400,330);
	setcolor(YELLOW);
	sprintf(info,"%d",i);
	outtextxy(350,280,info);
	sound(500);
	delay(50);
	nosound();
	}
	for(i=1;i<=booster;i++)
	{
	setcolor(getbkcolor());
	setfillstyle(1,getbkcolor());
	bar(400,320,450,370);
	setcolor(YELLOW);
	sprintf(info,"%d",i);
	outtextxy(400,320,info);
	sound(400);
	delay(50);
	nosound();
	}
	for(i=1;i<=fire;i++)
	{
	setcolor(getbkcolor());
	setfillstyle(1,getbkcolor());
	bar(350,360,400,410);
	setcolor(YELLOW);
	sprintf(info,"%d",i);
	outtextxy(350,360,info);
	sound(500);
	delay(50);
	nosound();
	}
}
//*********************************************************************************************

if(coin>50 && feul>10 && life_>=2)
{
	setcolor(getbkcolor());
	setfillstyle(1,getbkcolor());
	for(i=1;i<=getmaxx();i++)
	{
	bar(0,0,0+i,getmaxy());
	}
	setcolor(LIGHTGREEN);
	settextstyle(4,0,8);
	outtextxy(180,200,"You won !!!");
}
else
{
	setcolor(getbkcolor());
	setfillstyle(1,getbkcolor());
	for(i=1;i<=getmaxx();i++)
	{
	bar(0,0,0+i,getmaxy());
	}
	setcolor(LIGHTGREEN);
	settextstyle(4,0,8);
	outtextxy(180,200,"You loose ???");
}
delay(5000);
cleardevice();
}