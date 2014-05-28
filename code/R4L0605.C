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
#include "c:\R4L\bus.c"
//#include "c:\R4L\truck.c"
#define A 0
#define B 2
#define C 4
#define D 5
#define E 7
#define F 9
#define G 10

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

//		SO,2, E,L8, B,L16, A,L8, B,L16, A,L16, B,L16, G,L8, A,L16, B,L16, A,L8, G,L16, F,L16, E,L8, B,L16, A,L8, B,L16, A,L16, B,L16, G,L8, A,L16, B,L16, A,L16, R,L8, R,L16, E,L8, B,L16, A,L8, B,L16, A,L16, B,L16 ,G,L8, A,L16, B,L16, A,L8, G,L16, F,L16, D,L8, E,L16, F,L16, G,L16, F,L16, E,L16, D,L8, F,L16, E,L16, R,L4,  E,L8, B,L16, A,L8, B,L16, A,L16, B,L16, G,L8, A,L16, B,L16, A,L8, G,L16, F,L16, E,L8, B,L16, A,L8, B,L16, A,L16, B,L16, G,L8, A,L16, B,L16, A,L16, R,L8, R,L16, E,L8, B,L16, A,L8, B,L16, A,L16, B,L16 ,G,L8, A,L16, B,L16, A,L8, G,L16, F,L16, D,L8, E,L16, F,L16, G,L16, F,L16, E,L16, D,L8, F,L16, E,L16,
		SO,4, E,L8, B,L16, A,L8, B,L16, A,L16, B,L16, G,L8, A,L16, B,L16, A,L8, G,L16, F,L16, E,L8, B,L16, A,L8, B,L16, A,L16, B,L16, G,L8, A,L16, B,L16, A,L16, R,L8, R,L16, E,L8, B,L16, A,L8, B,L16, A,L16, B,L16 ,G,L8, A,L16, B,L16, A,L8, G,L16, F,L16, D,L8, E,L16, F,L16, G,L16, F,L16, E,L16, D,L8, F,L16, E,L16, R,L4,  E,L8, B,L16, A,L8, B,L16, A,L16, B,L16, G,L8, A,L16, B,L16, A,L8, G,L16, F,L16, E,L8, B,L16, A,L8, B,L16, A,L16, B,L16, G,L8, A,L16, B,L16, A,L16, R,L8, R,L16, E,L8, B,L16, A,L8, B,L16, A,L16, B,L16 ,G,L8, A,L16, B,L16, A,L8, G,L16, F,L16, D,L8, E,L16, F,L16, G,L16, F,L16, E,L16, D,L8, F,L16, E,L16,
//		SO,4, E,L8, R,L16, B,L16,R,L16, A,L8,R,L16, B,L16,R,L16, A,L16,R,L16, B,L16,R,L16, G,L8,R,L16,
//		A,L16,R,L16, B,L16,R,L16, A,L8,R,L16,		 G,L16,R,L16, F,L16,R,L16, E,L8,R,L16, B,L16,R,L16, A,L8,R,L16, B,L16,R,L16, A,L16,R,L16, B,L16,R,L16, G,L8,R,L16, A,L16,R,L16, B,L16,R,L16, A,L16, R,L8, R,L16, E,L8,R,L16, B,L16,R,L16, A,L8,R,L16, B,L16,R,L16, A,L16,R,L16, B,L16,R,L16, G,L8,R,L16, A,L16,R,L16, B,L16,R,L16, A,L8,R,L16, G,L16,R,L16, F,L16,R,L16, D,L8,R,L16, E,L16,R,L16, F,L16,R,L16, G,L16,R,L16, F,L16,R,L16, E,L16,R,L16, D,L8,R,L16, F,L16,R,L16, E,L16, R,L4,  E,L8,R,L16, B,L16,R,L16, A,L8,R,L16, B,L16,R,L16, A,L16,R,L16, B,L16,R,L16, G,L8,R,L16, A,L16,R,L16, B,L16,R,L16, A,L8,R,L16, G,L16,R,L16, F,L16,R,L16,
//		E,L8,R,L16, B,L16,R,L16, A,L8,R,L16, B,L16,R,L16, A,L16,R,L16, B,L16,R,L16, G,L8,R,L16, A,L16,R,L16, B,L16,R,L16, A,L16, R,L16, R,L16, E,L8,R,L16, B,L16,R,L16, A,L8,R,L16, B,L16,R,L16, A,L16,R,L16, B,L16,R,L16, G,L8,R,L16, A,L16,R,L16, B,L16,R,L16, A,L8,R,L16, G,L16,R,L16, F,L16,R,L16, D,L8,R,L16, E,L16,R,L16, F,L16,R,L16, G,L16,R,L16, F,L16,R,L16, E,L16,R,L16, D,L8,R,L16, F,L16,R,L16, E,L16,
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
		delay(50);
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

int y=-24500;

void roadspeed(int spe)
{
int i;
setcolor(getbkcolor());
setfillstyle(1,getbkcolor());
for(i=y;i<(y+25000);i+=100)
bar((getmaxx()/2)-5,i,(getmaxx()/2)+5,i+80);
if(y>=1)
{
y=-24500;
}
else
{
	if(spe<100 && spe>=25)
	y+=25;
	else if(spe<25 && spe>5)
	y+=30;
	else if(spe<=5)
	y+=35;
	else
	y+=20;
}
setcolor(WHITE);
setfillstyle(1,WHITE);
for(i=y;i<(y+25000);i+=100)
bar((getmaxx()/2)-5,i,(getmaxx()/2)+5,i+80);
delay(spe);
}



void main()
{
int gd=VGA,gm=VGAHI,errorcode,area,i,j,play,rndplay,rac,r,ch,chh,n=1,speed,sp=1,si=1,carx,cary,gear,aspeed,booster,drumx,drumy,drumv,drumx1,drumy1,drumx2,drumy2,drumx3,drumy3,spp,coin;
int life_=10;
int fire=20;
int soun;
char *buff;
char *fir;
char *boost;
int asi;

char *drmbuf;
char *tyre1;
char *feulb;
float feul=100;
char *car1buf;
char *car2buf;
char *car3buf;
char *pcar4buf;
char *fcar5buf;
char *pfcar6buf;
char *bus1buf;
char *bus2buf;
char *truck1buf;
char *truck2buf;
char *truck3buf;
char *truck4buf;
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

initgraph(&gd,&gm,"");
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
//****************************************************************************************
if(coin>0 && life_>0 && feul>0)
{
setbkcolor(8);
//geting tyres image*******************************
tyr1(200,50);
area=imagesize(200,72,276,172);
tyre1=malloc(area);
getimage(200,72,276,172,tyre1);
putimage(200,72,tyre1,XOR_PUT);
//geting car's image*****************************************
carx=250;
cary=400;
setcolor(WHITE);
car(carx,cary);
area=imagesize(carx-37,cary-56,carx+37,cary+80);
buff=malloc(area);
getimage(carx-37,cary-56,carx+37,cary+80,buff);
carx=carx-37;
cary=cary-56;
//geting boosters image***************************************************************
boo(250,300);
area=imagesize(246,300,266,320);
boost=malloc(area);
getimage(246,300,266,320,boost);
putimage(246,300,boost,XOR_PUT);
//geting fire image***************************************************************
carfire();
area=imagesize(330,120,340,144);
fir=malloc(area);
getimage(330,120,340,144,fir);
putimage(330,120,fir,XOR_PUT);
//********************************************************



//geting feul drum's image**********************************************
barr();
area=imagesize(150,95,490,125);
feulb=malloc(area);
getimage(150,95,490,125,feulb);
putimage(150,95,feulb,XOR_PUT);



//road basic structure***************************************
roadstru1();
basicstructure1();
sean7();
gears(gear);
speedgrp(151-speed);
feulgrp(feul);
coingrp(coin);
boostergrp(booster);
firee(fire);
lifee(life_);
//dhoooooom

	start=ptr=tune;
	sp_off=inportb(97);
	sp_on=sp_off|3;
	duration=0;
//*****************************

//PLAY GAME
for(play=1;play<10;play++)
{
if(life_>0 && feul>0 && coin>0)
{
for(rac=1;rac<25;rac++)
{
		if(kbhit())
		{
		roadspeed(speed);
		fflush(stdin);
		ch=bioskey(0);
			if(ch==20011 || ch==3371)  //gear button
			{
				if(gear>=5)
				{
				gears(gear);
				}
				else if(gear==0)
				{
				gear=1;
				gears(gear);
				}
				else if(gear==1 && speed<140)
				{
				gear=2;
				gears(gear);
				}
				else if(gear==2 && speed<130)
				{
				gear=3;
				gears(gear);
				}
				else if(gear==3 && speed<120)
				{
				gear=4;
				gears(gear);
				}
				else if(gear==4 && speed<100)
				{
				gear=5;
				gears(gear);
				}
			fflush(stdin);
			}   //gear close

			else if(ch==18989 || ch==3117)
			{
				if(gear!=1)
				{
				gear--;
				gears(gear);
				}
				else
				{
				gears(gear);
				}
			}

			else if(ch==21040)
			{
			speed=151;              //emargency bracks
			sp=1;
			setcolor(2);
			setfillstyle(1,2);
			bar(25,300,42,390);
			roadspeed(speed);
			gear=0;
			gears(gear);
			}
			else if(ch==18432)    //up key accilater
			{
			gears(gear);
			feul-=0.02;
			feulgrp(feul);
	     //		putimage(carx,cary,buff,XOR_PUT);
			putimage(carx,cary+20,tyre1,XOR_PUT);
			if(speed>15)
				{
				speed=151-sp;   //incrementation of car
				speedgrp(si);
				sp+=gear;
				si=sp;
				aspeed=speed;
				}
			putimage(carx,cary+20,tyre1,XOR_PUT);
		  //	putimage(carx,cary,buff,XOR_PUT);
			fflush(stdin);
			}   //up key
			else if(ch==19200)  //left button stairing
			{
				if(carx>140)
				{
				putimage(carx,cary,buff,XOR_PUT);
				carx=carx-30;
				putimage(carx,cary,buff,XOR_PUT);
				}
			fflush(stdin);
			}    //	left
			else if(ch==19712)   //right button stairing
			{
				if(carx<440)
				{
				putimage(carx,cary,buff,XOR_PUT);
				carx=carx+30;
				putimage(carx,cary,buff,XOR_PUT);
				}
			fflush(stdin);
			}       //right
			else if(ch==20480)   //down key bracks
			{
				if(cary<344)
				{
				putimage(carx,cary+20,tyre1,XOR_PUT);
				putimage(carx,cary+20,tyre1,XOR_PUT);

				putimage(carx,cary,buff,XOR_PUT);
				cary=cary+5;
				putimage(carx,cary,buff,XOR_PUT);
				}
				else
				{
				putimage(carx,cary+20,tyre1,XOR_PUT);
				speed=aspeed+sp;   //incrementation of car
				sp-=5;
				si=sp;
				speedgrp(si);
					if(sp<=0)
					sp=1;
				putimage(carx,cary+20,tyre1,XOR_PUT);
				}
			fflush(stdin);
			}    //down
			else if(ch==14624)   //fire
			{
			if(fire>0)
			{
			putimage(carx+32,cary-24,fir,XOR_PUT);
			fire--;
			firee(fire);
			roadspeed(speed);
			for (soun=1;soun<10;soun++)
			{
			sound(250*soun);
			delay(8);
			}
			fflush(stdin);
			putimage(carx+32,cary-24,fir,XOR_PUT);
			nosound();
			}
			}

		    //********************************************************
			else if(ch==9064 || ch==9032)          //geting highest speed
			{
			if(booster>0)
			{
			speed=1;
			putimage(carx+27,cary+130,boost,XOR_PUT);
			roadspeed(speed);
			putimage(carx+27,cary+130,boost,XOR_PUT);
			speedgrp(200);
			gear=5;
			gears(gear);
			feul-=0.08;
			feulgrp(feul);
			booster-=5;
			boostergrp(booster);
			fflush(stdin);
			}
			}
		 //*******************************************************

			else if(ch==6512 || ch==6480)
			{                          //pause
			setcolor(RED);
			settextstyle(2,0,5);
			outtextxy(20,50,"Pause??");
			getch();
			setcolor(YELLOW);
			settextstyle(2,0,5);
			outtextxy(20,50,"Pause??");
			}

			else if(ch==12386 || ch==12354)       //space booster
			{
			if(booster>0)
			{
			gearbooster(gear);
			booster--;
			boostergrp(booster);
				   //booster
			putimage(carx+27,cary+130,boost,XOR_PUT);
				putimage(carx,cary+20,tyre1,XOR_PUT);     //tyre
			putimage(carx+27,cary+130,boost,XOR_PUT);
				putimage(carx,cary+20,tyre1,XOR_PUT);      //tyres

					if(speed>5)
					{
					speed=aspeed-sp;   //incrementation of car
					speedgrp(si);
					sp+=15;
					si=sp;
						if(speed<=0)
						speed=2;
					}

					else if(cary>100)
					{
					putimage(carx,cary,buff,XOR_PUT);
					cary-=5;
					putimage(carx,cary,buff,XOR_PUT);
					}
			fflush(stdin);
			}
			}  //booster
			else if(ch==283)
			{
			play=1000;
			fflush(stdin);
			}
		}
		else
		{
			feul-=0.02;
			feulgrp(feul);
			fflush(stdin);

			if(speed<151)
			{
			roadspeed(speed+=10);
			fflush(stdin);
			spp=151-speed;
			speedgrp(sp-=5);
			fflush(stdin);
			}
			else
			{
			roadspeed(100);
			}
		fflush(stdin);
		}

} // car falling part ends
fflush(stdin);
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~``
else
{
//gameover
play=1000;
}
}
}






for(play=1;play<2;play++)
{
//feul drum fall
drumx=150;
drumy=0;
//***************************************************************************

for(rac=1;rac<25;rac++)
{
asi=0;
		if(kbhit())
		{
		putimage(drumx,drumy+=30,feulb,XOR_PUT);
		roadspeed(speed);
		fflush(stdin);
		ch=bioskey(0);
		putimage(drumx,drumy,feulb,XOR_PUT);


			if(ch==20011 || ch==3371)  //gear button
			{
				if(gear>=5)
				{
				gears(gear);
				}
				else if(gear==0)
				{
				gear=1;
				gears(gear);
				}
				else if(gear==1 && speed<140)
				{
				gear=2;
				gears(gear);
				}
				else if(gear==2 && speed<130)
				{
				gear=3;
				gears(gear);
				}
				else if(gear==3 && speed<120)
				{
				gear=4;
				gears(gear);
				}
				else if(gear==4 && speed<100)
				{
				gear=5;
				gears(gear);
				}
			fflush(stdin);
			}   //gear close

			else if(ch==18989 || ch==3117)
			{
				if(gear!=1)
				{
				gear--;
				gears(gear);
				}
				else
				{
				gears(gear);
				}
			}

			else if(ch==21040)
			{
			speed=151;              //emargency bracks
			sp=1;
			setcolor(2);
			setfillstyle(1,2);
			bar(25,300,42,390);
			roadspeed(speed);
			gear=0;
			gears(gear);
			}


			else if(ch==18432)    //up key accilater
			{
			gears(gear);
			feul-=0.02;
			feulgrp(feul);
	     //		putimage(carx,cary,buff,XOR_PUT);
			putimage(carx,cary+20,tyre1,XOR_PUT);
			if(speed>15)
				{
				speed=151-sp;   //incrementation of car
				speedgrp(si);
				sp+=gear;
				si=sp;
				aspeed=speed;
				}
			putimage(carx,cary+20,tyre1,XOR_PUT);
		  //	putimage(carx,cary,buff,XOR_PUT);
			fflush(stdin);
			}   //up key



			else if(ch==19200)  //left button stairing
			{
				if(carx>140)
				{
				putimage(carx,cary,buff,XOR_PUT);
				carx=carx-30;
				putimage(carx,cary,buff,XOR_PUT);
				}
			fflush(stdin);
			}    //	left



			else if(ch==19712)   //right button stairing
			{
				if(carx<440)
				{
				putimage(carx,cary,buff,XOR_PUT);
				carx=carx+30;
				putimage(carx,cary,buff,XOR_PUT);
				}
			fflush(stdin);
			}       //right



			else if(ch==20480)   //down key bracks
			{
				if(cary<344)
				{
				putimage(carx,cary+20,tyre1,XOR_PUT);
				putimage(carx,cary+20,tyre1,XOR_PUT);

				putimage(carx,cary,buff,XOR_PUT);
				cary=cary+5;
				putimage(carx,cary,buff,XOR_PUT);
				}
				else
				{
				putimage(carx,cary+20,tyre1,XOR_PUT);
				speed=aspeed+sp;   //incrementation of car
				sp-=5;
				si=sp;
				speedgrp(si);
					if(sp<=0)
					sp=1;
				putimage(carx,cary+20,tyre1,XOR_PUT);
				}
			fflush(stdin);
			}    //down

			else if(ch==14624)   //fire
			{
			if(fire>0)
			{
			putimage(carx+32,cary-24,fir,XOR_PUT);
			fire--;
			firee(fire);
			roadspeed(speed);
			for (soun=1;soun<10;soun++)
			{
			sound(250*soun);
			delay(8);
			}
			fflush(stdin);
			putimage(carx+32,cary-24,fir,XOR_PUT);
			nosound();
			}
			}

		    //********************************************************
			else if(ch==9064 || ch==9032)          //geting highest speed
			{
			if(booster>0)
			{
			speed=1;
			putimage(carx+27,cary+130,boost,XOR_PUT);
			roadspeed(speed);
			putimage(carx+27,cary+130,boost,XOR_PUT);
			speedgrp(200);
			gear=5;
			gears(gear);
			feul-=0.08;
			feulgrp(feul);
			booster-=5;
			boostergrp(booster);
			fflush(stdin);
			asi=1;
			}
			}
		 //*******************************************************

			else if(ch==6512 || ch==6480)
			{                          //pause
			setcolor(RED);
			settextstyle(2,0,5);
			outtextxy(20,50,"Pause??");
			getch();
			setcolor(YELLOW);
			settextstyle(2,0,5);
			outtextxy(20,50,"Pause??");
			}


			else if(ch==12386 || ch==12354)       //space booster
			{
			if(booster>0)
			{
			gearbooster(gear);
			booster--;
			boostergrp(booster);
				   //booster
			putimage(carx+27,cary+130,boost,XOR_PUT);
				putimage(carx,cary+20,tyre1,XOR_PUT);     //tyre
			putimage(carx+27,cary+130,boost,XOR_PUT);
				putimage(carx,cary+20,tyre1,XOR_PUT);      //tyres

					if(speed>5)
					{
					speed=aspeed-sp;   //incrementation of car
					speedgrp(si);
					sp+=15;
					si=sp;
						if(speed<=0)
						speed=2;
					}

					else if(cary>100)
					{
					putimage(carx,cary,buff,XOR_PUT);
					cary-=5;
					putimage(carx,cary,buff,XOR_PUT);
					}
			fflush(stdin);
			}
			}  //booster

		}


		else
		{
			feul-=0.02;
			feulgrp(feul);
			fflush(stdin);

			if(speed<151)
			{
			putimage(drumx,drumy+=30,feulb,XOR_PUT);
			roadspeed(speed+=10);
			putimage(drumx,drumy,feulb,XOR_PUT);
			fflush(stdin);
			spp=151-speed;
			speedgrp(sp-=5);
			fflush(stdin);
			}
			else
			{
			putimage(drumx,drumy+=30,feulb,XOR_PUT);     //dreum
			roadspeed(100);
			putimage(drumx,drumy,feulb,XOR_PUT);  //drum
			}

		fflush(stdin);
		}
			if(drumy+30>=cary)
			{
			if(speed==1)
			{
			setcolor(LIGHTRED);
			settextstyle(4,0,8);
			outtextxy(150,200,"Bravo !!!");
			playtune();
			nosound();
			rac=3000;
			}
			else
			{
			printf("\a");
			rac=3000;
			coin==0;
			feul==0;
			booster==0;
			fire==0;
			life_==0;
			}
			}

} // fdrum falling part ends
fflush(stdin);
}
cleardevice();





//*********************************************************************************************
rec.coins=coin;
rec.feuls=feul;
rec.speeds=speed;
rec.gear_=gear;
rec.lifes=life_;
rec.fire_=fire;
rec.boosters=booster;
fp=fopen("c:\\rruunn.r4l","w");
fwrite(&rec,recsize,1,fp);
fclose(fp);
//closegraph();
}