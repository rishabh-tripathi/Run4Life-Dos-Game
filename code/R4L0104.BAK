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
int life_;
int fire;
int soun;
char *buff;
char *fir;
char *boost;

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

if(coin>0 && life_>0 && feul>0)
{

setbkcolor(8);
//****************************************************************************************
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



//geting car1 image enemy object**********************************************
car2();
area=imagesize(195,147,255,295);
car1buf=malloc(area);
getimage(195,147,255,295,car1buf);
putimage(195,147,car1buf,XOR_PUT);
//geting front car4 image enemy object**********************************************
fcar();
area=imagesize(195,145,255,282);
fcar5buf=malloc(area);
getimage(195,145,255,282,fcar5buf);
putimage(195,145,fcar5buf,XOR_PUT);
//geting front police car6 image enemy object**********************************************
pfcar();
area=imagesize(195,145,255,282);
pfcar6buf=malloc(area);
getimage(195,145,255,282,pfcar6buf);
putimage(195,145,pfcar6buf,XOR_PUT);
//geting police car4 image enemy object**********************************************
pcar1();
area=imagesize(389,140,461,289);
pcar4buf=malloc(area);
getimage(389,140,461,289,pcar4buf);
putimage(389,140,pcar4buf,XOR_PUT);


//road basic structure***************************************
roadstru();
basicstructure1();
sean1();
gears(gear);
speedgrp(151-speed);
feulgrp(feul);
coingrp(coin);
boostergrp(booster);
lifee(life_);
firee(fire);





//PLAY GAME
for(play=1;play<20;play++)
{
if(life_>0 && feul>0 && coin>0)
{
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`
rndplay=random(8);













if(rndplay==1)
{
	      //car4 fall                single car in road
drumv=random(388);
	if(drumv>180)
	{
	 drumx=drumv;
	}
	else
	{
	drumx=280;
	}
drumy=0;
//***************************************************************************
for(rac=1;rac<50;rac++)
{
		if(kbhit())
		{
		putimage(drumx,drumy+=10,pcar4buf,XOR_PUT);
		roadspeed(speed);
		fflush(stdin);
		ch=bioskey(0);
		putimage(drumx,drumy,pcar4buf,XOR_PUT);


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
				if(carx>190)
				{
				putimage(carx,cary,buff,XOR_PUT);
				carx=carx-30;
				putimage(carx,cary,buff,XOR_PUT);
				}
			fflush(stdin);
			}    //	left



			else if(ch==19712)   //right button stairing
			{
				if(carx<380)
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
			if(drumx>carx && drumx<carx+75 || drumx+72>carx && drumx+72<carx+75)
			{
			rac=1000;
			}
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


			else if(ch==12386 || ch==12354)      //space booster
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
			putimage(drumx,drumy+=10,pcar4buf,XOR_PUT);
			roadspeed(speed+=10);
			putimage(drumx,drumy,pcar4buf,XOR_PUT);
			fflush(stdin);
			spp=151-speed;
			speedgrp(sp-=5);
			fflush(stdin);
			}
			else
			{
			putimage(drumx,drumy+=10,pcar4buf,XOR_PUT);     //dreum
			roadspeed(100);
			putimage(drumx,drumy,pcar4buf,XOR_PUT);  //drum
			}

		fflush(stdin);
		}
			if(drumx>carx && drumx<carx+75 || drumx+72>carx && drumx+72<carx+75)
			{
			if(drumy+149>=cary)
			{
			rac=3000;
			coin-=3;
			coingrp(coin);
			life_--;
			lifee(life_);
			printf("\a");
			printf("\a");
			printf("\a");
			}
			}

} // car falling part ends
fflush(stdin);
}

















else if(rndplay==3)
{
	      //car5 fall                single car in road
	drumv=random(400);
	if(drumv>180)
	{
	 drumx=drumv;
	}
	else
	{
	drumx=230;
	}
drumy=getmaxy();
//***************************************************************************
for(rac=1;rac<50;rac++)
{
		if(kbhit())
		{
		putimage(drumx,drumy-=10,fcar5buf,XOR_PUT);
		roadspeed(speed);
		fflush(stdin);
		ch=bioskey(0);
		putimage(drumx,drumy,fcar5buf,XOR_PUT);


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
				if(carx>190)
				{
				putimage(carx,cary,buff,XOR_PUT);
				carx=carx-30;
				putimage(carx,cary,buff,XOR_PUT);
				}
			fflush(stdin);
			}    //	left



			else if(ch==19712)   //right button stairing
			{
				if(carx<380)
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
			if(drumx>carx && drumx<carx+75 || drumx+60>carx && drumx+60<carx+75)
			{
			rac=1000;
			}
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


			else if(ch==12386 || ch==12354)      //space booster
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
			putimage(drumx,drumy-=10,fcar5buf,XOR_PUT);
			roadspeed(speed+=10);
			putimage(drumx,drumy,fcar5buf,XOR_PUT);
			fflush(stdin);
			spp=151-speed;
			speedgrp(sp-=5);
			fflush(stdin);
			}
			else
			{
			putimage(drumx,drumy-=10,fcar5buf,XOR_PUT);     //dreum
			roadspeed(100);
			putimage(drumx,drumy,fcar5buf,XOR_PUT);  //drum
			}

		fflush(stdin);
		}
			if(drumx>carx && drumx<carx+75 || drumx+60>carx && drumx+60<carx+75)
			{
			if(drumy>=cary && drumy<=cary+137 || drumy+136>=cary && drumy+136<=cary+137)
			{
			rac=50;
			coin-=1;
			coingrp(coin);
			printf("\a");
			}
			}

} // car falling part ends
fflush(stdin);
}












else if(rndplay==4)
{
	      //car1 fall                single car in road
drumv=random(400);
	if(drumv>180)
	{
	 drumx=drumv;
	}
	else
	{
	drumx=220;
	}
drumy=0;
for(rac=1;rac<50;rac++)
{
		if(kbhit())
		{
		putimage(drumx,drumy+=10,car1buf,XOR_PUT);
		roadspeed(speed);
		fflush(stdin);
		ch=bioskey(0);
		putimage(drumx,drumy,car1buf,XOR_PUT);

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
				if(carx>190)
				{
				putimage(carx,cary,buff,XOR_PUT);
				carx=carx-30;
				putimage(carx,cary,buff,XOR_PUT);
				}
			fflush(stdin);
			}    //	left



			else if(ch==19712)   //right button stairing
			{
				if(carx<380)
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
			if(drumx>carx && drumx<carx+75 || drumx+60>carx && drumx+60<carx+75)
			{
			rac=1000;
			}
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


			else if(ch==12386)       //space booster
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
			putimage(drumx,drumy+=10,car1buf,XOR_PUT);
			roadspeed(speed+=10);
			putimage(drumx,drumy,car1buf,XOR_PUT);
			fflush(stdin);
			spp=151-speed;
			speedgrp(sp-=5);
			fflush(stdin);
			}
			else
			{
			putimage(drumx,drumy+=10,car1buf,XOR_PUT);     //dreum
			roadspeed(100);
			putimage(drumx,drumy,car1buf,XOR_PUT);  //drum
			}

		fflush(stdin);
		}
			if(drumx>carx && drumx<carx+75 || drumx+60>carx && drumx+60<carx+75)
			{
			if(drumy+148>=cary)
			{
			rac=3000;
			coin-=1;
			coingrp(coin);
			printf("\a");
			}
			}

} // car falling part ends
fflush(stdin);
}














else if(rndplay==5)
{
//double car fall      with front car    double sided carfall
drumv=random(210);
	if(drumv>180)
	{
	drumx=drumv;
	drumx1=(drumx+60)+random(210);
	}
	else
	{
	drumx=200;
	drumx1=300;
	}
drumy=0;
drumy1=getmaxy();

//***************************************************************************

for(rac=1;rac<50;rac++)
{
		if(kbhit())
		{
		putimage(drumx,drumy+=10,car1buf,XOR_PUT);
		putimage(drumx1,drumy1-=10,fcar5buf,XOR_PUT);
		roadspeed(speed);
		fflush(stdin);
		ch=bioskey(0);
		putimage(drumx,drumy,car1buf,XOR_PUT);
		putimage(drumx1,drumy1,fcar5buf,XOR_PUT);


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
				if(carx>190)
				{
				putimage(carx,cary,buff,XOR_PUT);
				carx=carx-30;
				putimage(carx,cary,buff,XOR_PUT);
				}
			fflush(stdin);
			}    //	left



			else if(ch==19712)   //right button stairing
			{
				if(carx<380)
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
			if(drumx>carx && drumx<carx+75 || drumx+60>carx && drumx+60<carx+75 || drumx1>carx && drumx1<carx+75 || drumx1+60>carx && drumx1+60<carx+75)
			{
			rac=1000;
			}
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


			else if(ch==12386 || ch==12354)      //space booster
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
			putimage(drumx,drumy+=10,car1buf,XOR_PUT);
			putimage(drumx1,drumy1-=10,fcar5buf,XOR_PUT);
			roadspeed(speed+=10);
			putimage(drumx,drumy,car1buf,XOR_PUT);
			putimage(drumx1,drumy1,fcar5buf,XOR_PUT);
			fflush(stdin);
			spp=151-speed;
			speedgrp(sp-=5);
			fflush(stdin);
			}
			else
			{
			putimage(drumx,drumy+=10,car1buf,XOR_PUT);     //dreum
			putimage(drumx1,drumy1-=10,fcar5buf,XOR_PUT);
			roadspeed(100);
			putimage(drumx,drumy,car1buf,XOR_PUT);  //drum
			putimage(drumx1,drumy1,fcar5buf,XOR_PUT);
			}

		fflush(stdin);
		}
			if(drumx>carx && drumx<carx+75 || drumx+60>carx && drumx+60<carx+75)
			{
			if(drumy+148>=cary)
			{
			rac=3000;
			coin-=2;
			coingrp(coin);
			printf("\a");
			}
			}
			else if(drumx1>carx && drumx1<carx+75 || drumx1+60>carx && drumx1+60<carx+75)
			{
			if(drumy1>=cary && drumy1<=cary+137 || drumy1+136>=cary && drumy1+136<=cary+137)
			{
			rac=3000;
			coin-=1;
			coingrp(coin);
			printf("\a");
			}
			}

} // cars falling part ends
fflush(stdin);
}
















else if(rndplay==6)
{
//double car fall      with front car    double sided carfall
drumv=random(210);
	if(drumv>180)
	{
	drumx=drumv;
	drumx1=(drumx+60)+random(200);
	}
	else
	{
	drumx=200;
	drumx1=300;
	}
drumy=0;
drumy1=random(100);

//***************************************************************************

for(rac=1;rac<50;rac++)
{
		if(kbhit())
		{
		putimage(drumx,drumy+=10,car1buf,XOR_PUT);
		putimage(drumx1,drumy1+=10,pcar4buf,XOR_PUT);
		roadspeed(speed);
		fflush(stdin);
		ch=bioskey(0);
		putimage(drumx,drumy,car1buf,XOR_PUT);
		putimage(drumx1,drumy1,pcar4buf,XOR_PUT);


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
				if(carx>190)
				{
				putimage(carx,cary,buff,XOR_PUT);
				carx=carx-30;
				putimage(carx,cary,buff,XOR_PUT);
				}
			fflush(stdin);
			}    //	left



			else if(ch==19712)   //right button stairing
			{
				if(carx<380)
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
			if(drumx>carx && drumx<carx+75 || drumx+60>carx && drumx+60<carx+75 || drumx1>carx && drumx1<carx+75 || drumx1+72>carx && drumx1+72<carx+75)
			{
			rac=1000;
			}
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


			else if(ch==12386 || ch==12354)      //space booster
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
			putimage(drumx,drumy+=10,car1buf,XOR_PUT);
			putimage(drumx1,drumy1+=10,pcar4buf,XOR_PUT);
			roadspeed(speed+=10);
			putimage(drumx,drumy,car1buf,XOR_PUT);
			putimage(drumx1,drumy1,pcar4buf,XOR_PUT);
			fflush(stdin);
			spp=151-speed;
			speedgrp(sp-=5);
			fflush(stdin);
			}
			else
			{
			putimage(drumx,drumy+=10,car1buf,XOR_PUT);     //dreum
			putimage(drumx1,drumy1+=10,pcar4buf,XOR_PUT);
			roadspeed(100);
			putimage(drumx,drumy,car1buf,XOR_PUT);  //drum
			putimage(drumx1,drumy1,pcar4buf,XOR_PUT);
			}

		fflush(stdin);
		}
			if(drumx>carx && drumx<carx+75 || drumx+60>carx && drumx+60<carx+75)
			{
			if(drumy+148>=cary)
			{
			rac=3000;
			coin-=1;
			coingrp(coin);
			printf("\a");
			}
			}
			else if(drumx1>carx && drumx1<carx+75 || drumx1+72>carx && drumx1+72<carx+75)
			{
			if(drumy1+148>=cary)
			{
			rac=3000;
			coin-=3;
			coingrp(coin);
			life_--;
			lifee(life_);
			printf("\a");
			printf("\a");
			printf("\a");
			}
			}


} // cars falling part ends
fflush(stdin);
}











else if(rndplay==7)
{
//double car fall      with front car    double sided carfall
drumv=random(210);
	if(drumv>180)
	{
	drumx=drumv;
	drumx1=(drumx+60)+random(210);
	}
	else
	{
	drumx=200;
	drumx1=300;
	}
drumy=0;
drumy1=getmaxy();

//***************************************************************************

for(rac=1;rac<50;rac++)
{
		if(kbhit())
		{
		putimage(drumx,drumy+=10,car1buf,XOR_PUT);
		putimage(drumx1,drumy1-=10,pfcar6buf,XOR_PUT);
		roadspeed(speed);
		fflush(stdin);
		ch=bioskey(0);
		putimage(drumx,drumy,car1buf,XOR_PUT);
		putimage(drumx1,drumy1,pfcar6buf,XOR_PUT);


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
				if(carx>190)
				{
				putimage(carx,cary,buff,XOR_PUT);
				carx=carx-30;
				putimage(carx,cary,buff,XOR_PUT);
				}
			fflush(stdin);
			}    //	left



			else if(ch==19712)   //right button stairing
			{
				if(carx<380)
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
			if(drumx>carx && drumx<carx+75 || drumx+60>carx && drumx+60<carx+75 || drumx1>carx && drumx1<carx+75 || drumx1+60>carx && drumx1+60<carx+75)
			{
			rac=1000;
			}
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


			else if(ch==12386 || ch==12354)      //space booster
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
			putimage(drumx,drumy+=10,car1buf,XOR_PUT);
			putimage(drumx1,drumy1-=10,pfcar6buf,XOR_PUT);
			roadspeed(speed+=10);
			putimage(drumx,drumy,car1buf,XOR_PUT);
			putimage(drumx1,drumy1,pfcar6buf,XOR_PUT);
			fflush(stdin);
			spp=151-speed;
			speedgrp(sp-=5);
			fflush(stdin);
			}
			else
			{
			putimage(drumx,drumy+=10,car1buf,XOR_PUT);     //dreum
			putimage(drumx1,drumy1-=10,pfcar6buf,XOR_PUT);
			roadspeed(100);
			putimage(drumx,drumy,car1buf,XOR_PUT);  //drum
			putimage(drumx1,drumy1,pfcar6buf,XOR_PUT);
			}

		fflush(stdin);
		}
			if(drumx>carx && drumx<carx+75 || drumx+60>carx && drumx+60<carx+75)
			{
			if(drumy+148>=cary)
			{
			rac=3000;
			coin-=1;
			coingrp(coin);
			printf("\a");
			}
			}
			else if(drumx1>carx && drumx1<carx+75 || drumx1+60>carx && drumx1+60<carx+75)
			{
			if(drumy1>=cary && drumy1<=cary+137 || drumy1+136>=cary && drumy1+136<=cary+137)
			{
			rac=3000;
			coin-=3;
			coingrp(coin);
			life_--;
			lifee(life_);
			printf("\a");
			printf("\a");
			printf("\a");
			}
			}

} // cars falling part ends
fflush(stdin);
}













else
{
for(rac=1;rac<50;rac++)
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
				if(carx>190)
				{
				putimage(carx,cary,buff,XOR_PUT);
				carx=carx-30;
				putimage(carx,cary,buff,XOR_PUT);
				}
			fflush(stdin);
			}    //	left
			else if(ch==19712)   //right button stairing
			{
				if(carx<380)
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

			else if(ch==12386 || ch==12354)      //space booster
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
}
else
{
//gameover
play=1000;
}
}


}


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



getch();
//closegraph();
}