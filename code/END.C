#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<time.h>
#include<dos.h>
#include<bios.h>
#include<string.h>
#include<stdlib.h>
//#include "c:\R4L\sean.c"
//#include "c:\R4L\cars.c"
//#include "c:\R4L\car.c"
#include "c:\R4L\functions.c"
//#include "c:\R4L\basestru.c"
//#include "c:\R4L\bus.c"
//#include "c:\R4L\truck.c"


#define A 0
#define Af 1
#define B 2
#define Bf 3
#define C 4
#define D 5
#define Df 6
#define E 7
#define Ef 8
#define F 9
#define Ff 10
#define G 10
#define Gf 11

#define REPEAT 12
#define SO 13
#define R 14
#define END 15

#define L32 1
#define L16 2
#define L8 4
#define L4 8
#define L2 16
#define L1 32

float notes[7][12]=
{
	{
	130.81,138.56,146.83,155.56,164.81,174.61,185.0,
	196.0,207.65,220.0,227.31,246.96
	},
	{
	261.63,277.18,293.66,311.13,329.63,349.23,369.99,
	392.0,415.3,440.0,454.62,493.92
	},
	{
	523.25,554.37,587.33,622.25,659.26,698.46,739.99,
	783.99,830.61,880.0,909.24,987.84
	},
	{
	1046.5,1108.73,1174.66,1244.51,1328.51,1396.96,
	1479.98,1567.98,1661.22,1760.0,1818.48,1975.68
	},
	{
	2093.0,2217.46,2349.32,2489.02,2637.02,2793.83,
	2959.96,3135.96,3322.44,3520.0,3636.96,3951.36
	},
	{
	4186.0,4434.92,4698.64,4978.04,5274.04,5587.66,
	5919.92,6271.92,6644.88,7040.0,7273.92,7902.72
	},
	{
	8370.0,8869.89,9397.28,9956.08,10548.08,11175.32,
	12543.84,13289.76,14080.0,14547.84,15805.44
	},
};

char tune[]={
	      SO,3,Gf,L16, B,L16, A,L16, Gf,L16, Gf,L2, Gf,L16, A,L16, Gf,L16, Ff,L16, Ff,L2, Gf,L8, Ff,L8, Ff,L8, E,L8, E,L8, E,L16, Df,L16, C,L8, Df,L8, E,L2, Df,L8, C,L8, 	SO,2,B,L8, B,L8,	SO,3,C,L8, C,L8, C,L4, E,L8, Df,L8, C,L8,   SO,2,B,L8,   SO,3,C,L8, C,L8, C,L4, Ff,L8, Gf,L8, B,L8,	SO,4,C,L8,  Df,L2, E,L16, Df,L16, C,L16,   SO,3,B,L16,   SO,4,C,L2,  SO,3,Gf,L16, A,L16, Gf,L16, Ff,L16, Gf,L2,
		END,

	   };

char note,duration,octave,*ptr,*start,sp_on,sp_off;

union
{
	long count;
	unsigned char byte[2];
}p;


playtune()
{
	while(1)
	{
		if(duration)
		{
		delay(70);
		duration--;
		}
		else
		{
		note=*ptr;
		switch(note)
		{
			case 12:
				ptr=start;
				break;
			case 13:
				ptr++;
				octave=*ptr;
				ptr++;
				break;
			case 14:
				ptr++;
				duration=*ptr;
				outportb(97,sp_off);
				ptr++;
				break;
			case 15:
				outportb(97,sp_off);
				return;

			default:
				ptr++;
				duration=*ptr;
				p.count=1193280/notes[octave][note];
				outportb(67,182);
				outportb(66,p.byte[0]);
				outportb(66,p.byte[1]);
				outportb(97,sp_on);
				ptr++;
				}
			}
		}
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
	start=ptr=tune;
	sp_off=inportb(97);
	sp_on=sp_off|3;
	duration=0;

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


settextstyle(8,0,6);
setusercharsize(2,1,1,1);
setcolor(YELLOW);
outtextxy(235,285,"_By_");
setcolor(LIGHTRED);
textdisp1(10,325,"Rishabh Tripathi",LIGHTBLUE,BLUE);

cleardevice();
setcolor(LIGHTRED);
settextstyle(8,0,5);
textdisp(10,200,"What happened next...?");
settextstyle(8,0,5);
setusercharsize(2,1,1,1);
textdisp(15,250,"...Comming Soon");
textdisp1(15,250,"...Comming Soon",RED,LIGHTRED);
delay(2000);
cleardevice();
settextstyle(2,0,5);
outtextxy(100,50,"Programmed by : Rishabh Tripathi");
outtextxy(100,70,"Dedicated to my family...");
outtextxy(100,90,"Specially thanks to Shishir, Anurag and Neeraj");
outtextxy(100,120,"Your feedback are neccessary for us...");
outtextxy(100,150,"Contect me on...");
outtextxy(100,170,"rishabh2319@yahoo.co.in");
outtextxy(100,200,"Thanks for playing...");
	playtune();
      nosound();
delay(1000);
cleardevice();
}