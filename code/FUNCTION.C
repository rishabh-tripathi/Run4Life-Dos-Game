#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<bios.h>
#include<string.h>
#include<dir.h>
#include<stdlib.h>
#include<time.h>
/*
roadspeed(int spe)
{
	setfillstyle(1,getbkcolor());
	bar(120,50,130,70);
	bar(120,90,130,140);
	bar(120,160,130,210);
	bar(120,230,130,280);
	bar(120,300,130,350);
	bar(120,370,130,420);
	bar(120,440,130,490);

	bar(510,50,520,70);
	bar(510,90,520,140);
	bar(510,160,520,210);
	bar(510,230,520,280);
	bar(510,300,520,350);
	bar(510,370,520,420);
	bar(510,440,520,490);

	bar(310,60,320,100);
	bar(310,130,320,200);
	bar(310,230,320,300);
	bar(310,330,320,400);
	bar(310,430,320,500);


	setfillstyle(1,WHITE);
	bar(120,50,130,50);
	bar(120,70,130,120);
	bar(120,140,130,190);
	bar(120,210,130,260);
	bar(120,280,130,330);
	bar(120,350,130,400);
	bar(120,420,130,470);

	bar(510,50,520,50);
	bar(510,70,520,120);
	bar(510,140,520,190);
	bar(510,210,520,260);
	bar(510,280,520,330);
	bar(510,350,520,400);
	bar(510,420,520,470);

	bar(310,50,320,70);
	bar(310,100,320,170);
	bar(310,200,320,270);
	bar(310,300,320,370);
	bar(310,400,320,470);

	setfillstyle(1,getbkcolor());
	bar(309,50,310,getmaxy());
	bar(320,50,321,getmaxy());


	delay(spe);                                    //speed controller
	fflush(stdin);

	setfillstyle(1,getbkcolor());
	bar(120,50,130,50);
	bar(120,70,130,120);
	bar(120,140,130,190);
	bar(120,210,130,260);
	bar(120,280,130,330);
	bar(120,350,130,400);
	bar(120,420,130,470);

	bar(510,50,520,50);
	bar(510,70,520,120);
	bar(510,140,520,190);
	bar(510,210,520,260);
	bar(510,280,520,330);
	bar(510,350,520,400);
	bar(510,420,520,470);

	bar(310,50,320,70);
	bar(310,100,320,170);
	bar(310,200,320,270);
	bar(310,300,320,370);
	bar(310,400,320,470);


	setfillstyle(1,WHITE);
	bar(120,50,130,70);
	bar(120,90,130,140);
	bar(120,160,130,210);
	bar(120,230,130,280);
	bar(120,300,130,350);
	bar(120,370,130,420);
	bar(120,440,130,490);

	bar(510,50,520,70);
	bar(510,90,520,140);
	bar(510,160,520,210);
	bar(510,230,520,280);
	bar(510,300,520,350);
	bar(510,370,520,420);
	bar(510,440,520,490);

	bar(310,60,320,100);
	bar(310,130,320,200);
	bar(310,230,320,300);
	bar(310,330,320,400);
	bar(310,430,320,500);

	delay(spe);                  //speed controller
	fflush(stdin);
}


//*******************************************************************************************************************************************************************


  */






/*
//********************************************************************************
void roadstru()
{
int i;
//setcolor(WHITE);          //road color
//setfillstyle(1,WHITE);
//bar(0,0,getmaxx(),getmaxy());

setfillstyle(1,YELLOW);            //side ground
bar(0,0,110,getmaxy());
bar(530,0,getmaxx(),getmaxy());

setcolor(WHITE);
setfillstyle(9,WHITE);   //side line 1
bar(110,0,120,getmaxy());
setfillstyle(9,WHITE);
bar(520,0,530,getmaxy());

setcolor(YELLOW);
setlinestyle(1,0,3);
line(132,0,132,getmaxy());   //side line 2
line(135,0,135,getmaxy());
line(138,0,138,getmaxy());

line(503,0,503,getmaxy());  //side line 2
line(505,0,505,getmaxy());
line(508,0,508,getmaxy());

}
//***********************************************************************************
//**********************************************************************************


*/


void roadstru()
{
setcolor(YELLOW);
setfillstyle(1,YELLOW);
bar((getmaxx()/2)-140,0,0,25000);
bar((getmaxx()/2)+140,0,getmaxx(),25000);

setcolor(3);
setfillstyle(6,3);
bar((getmaxx()/2)-130,0,(getmaxx()/2)-140,25000);
bar((getmaxx()/2)+130,0,(getmaxx()/2)+140,25000);

setcolor(7);
setfillstyle(1,7);
bar((getmaxx()/2)-140,0,(getmaxx()/2)-180,25000);
bar((getmaxx()/2)+140,0,(getmaxx()/2)+180,25000);
}



void roadstru1()
{
setcolor(YELLOW);
setfillstyle(1,YELLOW);
bar(0,0,90,25000);
bar(550,0,getmaxx(),25000);

setcolor(3);
setfillstyle(6,3);
bar(130,0,140,25000);
bar(500,0,510,25000);

setcolor(7);
setfillstyle(1,7);
bar(130,0,90,25000);
bar(510,0,550,25000);
}


//*****************************************************************************************
//***********************************************************************************
void tyr1(int x,int y)                        //tyres rounding
{
int i;
setcolor(WHITE);
for(i=1;i<=10;i+=1)
{
arc(x+7,(y+52)-i,70,110,20);         //design
arc(x+7,(y+7)+i,250,292,20);

arc(x+67,(y+52)-i,70,110,20);
arc(x+67,(y+7)+i,250,292,20);

arc(x+7,(y+134)-i,70,110,20);            //design
arc(x+7,(y+89)+i,250,292,20);

arc(x+67,(y+134)-i,70,110,20);
arc(x+67,(y+89)+i,250,292,20);
}
}
//**************************************************************************************************
//***********************************************************************************












//*********************************************************************************************************************************************************
void textdisp(int x,int y,const char *r)
{
int s,i,j;
char d[2];
s=strlen(r);
moveto(x,y);
for(i=0;i<=s;i++)
{
d[0]=r[i];
d[1]='\0';
outtext(d);
delay(random(100));
for(j=1;j<640;j+=5)
{
sound(200*j);
delay(1);
}
nosound();
}
}
//******************************************************************************************
//************************************************************************************
//*********************************************************************************************************************************************************
void textdisp1(int x,int y,const char *r,int col1,int col2)
{
int s,i,j;
char d[2];
s=strlen(r);
moveto(x,y);
for(i=0;i<=s;i++)
{
setcolor(col2);
outtextxy(x,y,r);
setcolor(col1);
d[0]=r[i];
d[1]='\0';
outtext(d);
delay(200);
}
}
//******************************************************************************************
//************************************************************************************














 //*****************************************************************************************
void gears(int g)
{
settextstyle(2,0,4);
setlinestyle(0,0,1);
if(g==1)
{
setcolor(YELLOW);
setfillstyle(1,YELLOW);
bar(38,260,48,275);

setcolor(2);
setfillstyle(1,2);
fillellipse(45,218,3,3);
fillellipse(42,233,3,3);
fillellipse(37,247,3,3);
fillellipse(30,260,3,3);
fillellipse(20,270,3,3);
setcolor(LIGHTRED);
setfillstyle(1,LIGHTRED);                   //gear demo 1st gere
fillellipse(20,270,3,3);


setcolor(2);
outtextxy(40,260,"1");
}
else if(g==2)
{
setcolor(YELLOW);
setfillstyle(1,YELLOW);
bar(38,260,48,275);
			 //60red
setcolor(2);
setfillstyle(1,2);
fillellipse(45,218,3,3);
fillellipse(42,233,3,3);
fillellipse(37,247,3,3);
fillellipse(30,260,3,3);
fillellipse(20,270,3,3);
setcolor(LIGHTRED);
setfillstyle(1,LIGHTRED);                   //gear demo 1st gere
fillellipse(30,260,3,3);

setcolor(2);
outtextxy(40,260,"2");
}
else if(g==3)
{
setcolor(YELLOW);
setfillstyle(1,YELLOW);
bar(38,260,48,275);
			 //60red
setcolor(2);
setfillstyle(1,2);
fillellipse(45,218,3,3);
fillellipse(42,233,3,3);
fillellipse(37,247,3,3);
fillellipse(30,260,3,3);
fillellipse(20,270,3,3);
setcolor(LIGHTRED);
setfillstyle(1,LIGHTRED);
fillellipse(37,247,3,3);		  //gear demo 1st gere

setcolor(2);
outtextxy(40,260,"3");
}
else if(g==4)
{
setcolor(YELLOW);
setfillstyle(1,YELLOW);
bar(38,260,48,275);
			 //60red
setcolor(2);
setfillstyle(1,2);
fillellipse(45,218,3,3);
fillellipse(42,233,3,3);
fillellipse(37,247,3,3);
fillellipse(30,260,3,3);
fillellipse(20,270,3,3);
setcolor(LIGHTRED);
setfillstyle(1,LIGHTRED);
fillellipse(42,233,3,3);

setcolor(2);
outtextxy(40,260,"4");
}
else if(g==5)
{
setcolor(YELLOW);
setfillstyle(1,YELLOW);
bar(38,260,48,275);
			 //60red
setcolor(2);
setfillstyle(1,2);
fillellipse(45,218,3,3);
fillellipse(42,233,3,3);
fillellipse(37,247,3,3);
fillellipse(30,260,3,3);
fillellipse(20,270,3,3);
setcolor(LIGHTRED);
setfillstyle(1,LIGHTRED);
fillellipse(45,218,3,3);

setcolor(2);
outtextxy(40,260,"5");
}
else
{
setcolor(YELLOW);
setfillstyle(1,YELLOW);
bar(38,260,48,275);
			 //60red
setcolor(2);
setfillstyle(1,2);
fillellipse(45,218,3,3);
fillellipse(42,233,3,3);
fillellipse(37,247,3,3);
fillellipse(30,260,3,3);
fillellipse(20,270,3,3);
}
}

//***************************************************************************************










void gearbooster(int g)
{
settextstyle(2,0,4);
setlinestyle(0,0,1);
if(g==1)
{
setcolor(YELLOW);
setfillstyle(1,YELLOW);
bar(38,260,48,275);

setcolor(2);
setfillstyle(1,2);
fillellipse(45,218,3,3);
fillellipse(42,233,3,3);
fillellipse(37,247,3,3);
fillellipse(30,260,3,3);
fillellipse(20,270,3,3);
setcolor(LIGHTGREEN);
setfillstyle(1,LIGHTGREEN);                   //gear demo 1st gere
fillellipse(20,270,3,3);

setcolor(2);
outtextxy(40,260,"1");
}
else if(g==2)
{
setcolor(YELLOW);
setfillstyle(1,YELLOW);
bar(38,260,48,275);
			 //60red
setcolor(2);
setfillstyle(1,2);
fillellipse(45,218,3,3);
fillellipse(42,233,3,3);
fillellipse(37,247,3,3);
fillellipse(30,260,3,3);
fillellipse(20,270,3,3);
setcolor(LIGHTGREEN);
setfillstyle(1,LIGHTGREEN);                   //gear demo 1st gere
fillellipse(30,260,3,3);

setcolor(2);
outtextxy(40,260,"2");
}
else if(g==3)
{
setcolor(YELLOW);
setfillstyle(1,YELLOW);
bar(38,260,48,275);
			 //60red
setcolor(2);
setfillstyle(1,2);
fillellipse(45,218,3,3);
fillellipse(42,233,3,3);
fillellipse(37,247,3,3);
fillellipse(30,260,3,3);
fillellipse(20,270,3,3);
setcolor(LIGHTGREEN);
setfillstyle(1,LIGHTGREEN);
fillellipse(37,247,3,3);		  //gear demo 1st gere

setcolor(2);
outtextxy(40,260,"3");
}

else if(g==4)
{
setcolor(YELLOW);
setfillstyle(1,YELLOW);
bar(38,260,48,275);
			 //60red
setcolor(2);
setfillstyle(1,2);
fillellipse(45,218,3,3);
fillellipse(42,233,3,3);
fillellipse(37,247,3,3);
fillellipse(30,260,3,3);
fillellipse(20,270,3,3);
setcolor(LIGHTGREEN);
setfillstyle(1,LIGHTGREEN);
fillellipse(42,233,3,3);

setcolor(2);
outtextxy(40,260,"4");
}
else if(g==5)
{
setcolor(YELLOW);
setfillstyle(1,YELLOW);
bar(38,260,48,275);
			 //60red
setcolor(2);
setfillstyle(1,2);
fillellipse(45,218,3,3);
fillellipse(42,233,3,3);
fillellipse(37,247,3,3);
fillellipse(30,260,3,3);
fillellipse(20,270,3,3);
setcolor(LIGHTGREEN);
setfillstyle(1,LIGHTGREEN);
fillellipse(45,218,3,3);

setcolor(2);
outtextxy(40,260,"5");
}
else
{
setcolor(YELLOW);
setfillstyle(1,YELLOW);
bar(38,260,48,275);
			 //60red
setcolor(2);
setfillstyle(1,2);
fillellipse(45,218,3,3);
fillellipse(42,233,3,3);
fillellipse(37,247,3,3);
fillellipse(30,260,3,3);
fillellipse(20,270,3,3);
}
}
//***************************************************************************************










void feulgrp(float ff)
{
float f;
char fff[6];
float ffff;
settextstyle(2,0,4);
setlinestyle(0,0,1);
setcolor(2);
setfillstyle(1,2);
bar(getmaxx()-40,285,getmaxx()-2,295);
setcolor(WHITE);
sprintf(fff,"%.2f%",ff);
outtextxy(getmaxx()-40,285,fff);
f=100.00-ff;

setfillstyle(1,58);
bar(getmaxx()-25,300,getmaxx()-40,333);             //bar
setfillstyle(1,60);
bar(getmaxx()-25,333,getmaxx()-40,366);
setfillstyle(1,4);
bar(getmaxx()-25,366,getmaxx()-40,399);

setcolor(2);
setfillstyle(1,2);
bar(getmaxx()-25,300,getmaxx()-40,300+f);

}
















void boostergrp(int bb)
{
int b;
char bbb[6];
settextstyle(2,0,4);
setlinestyle(0,0,1);
setcolor(2);
setfillstyle(1,2);
bar(getmaxx()-40,85,getmaxx()-2,95);
setcolor(WHITE);
sprintf(bbb,"%d%",bb);
outtextxy(getmaxx()-40,85,bbb);
b=100-bb;
setcolor(2);
setfillstyle(1,2);
bar(getmaxx()-25,100,getmaxx()-40,100+b);
}













void coingrp(int cc)
{
int c;
char ccc[6];
settextstyle(2,0,4);
setlinestyle(0,0,1);
setcolor(2);
setfillstyle(1,2);
bar(5,85,40,95);
setcolor(WHITE);
sprintf(ccc,"%d",cc);
outtextxy(20,85,ccc);
c=200-cc;
setcolor(2);
setfillstyle(1,2);
bar(25,100,40,100+(c/2));
}










void speedgrp(int ss)
{
float s;
char sss[6];
settextstyle(2,0,4);
setlinestyle(0,0,1);
setcolor(2);
setfillstyle(1,2);
bar(5,285,46,299);
setcolor(WHITE);
sprintf(sss,"%dmph",ss);
outtextxy(10,285,sss);

if(ss>1 && ss<=50)
{
s=ss;
setcolor(2);
setfillstyle(1,2);
bar(25,300,40,399);
setcolor(60);
setfillstyle(1,60);
bar(25,399,40,399-s);
setcolor(57);
setfillstyle(1,57);
bar(30,399,35,399-s);
}
else if(ss>50 && ss<=100)
{
s=ss;
setcolor(2);
setfillstyle(1,2);
bar(25,300,40,399);
setcolor(60);
setfillstyle(1,60);
bar(25,399,40,399-s);
setcolor(57);
setfillstyle(1,57);
bar(30,399,35,399-s);
}
else if(ss>100 && ss<=160)
{
s=ss/2;
setcolor(2);
setfillstyle(1,2);
bar(25,300,40,399);
setcolor(57);
setfillstyle(1,57);
bar(25,399,40,399-s);
setcolor(60);
setfillstyle(1,60);
bar(30,399,35,399-s);
}
else if(ss>160)
{
setcolor(2);
setfillstyle(1,2);
bar(25,300,40,399);
setcolor(57);
setfillstyle(1,57);
bar(25,399,40,305);
setcolor(60);
setfillstyle(1,60);
bar(30,399,35,305);
}
}




void lifee(int lif)
{
char ll[5];
sprintf(ll,"%d",lif);
setcolor(YELLOW);
setfillstyle(1,YELLOW);
bar(getmaxx()-25,252,getmaxx()-12,265);

settextstyle(2,0,4);
setcolor(BLUE);
outtextxy(getmaxx()-25,252,ll);
}
void firee(int f)
{
char ff[5];
sprintf(ff,"%d",f);
setcolor(YELLOW);
setfillstyle(1,YELLOW);
bar(getmaxx()-35,59,getmaxx()-15,75);
setcolor(RED);
settextstyle(2,0,5);
outtextxy(getmaxx()-32,58,ff);
}

loading(void)
{
int i,j,col;

setcolor(BLUE);
setfillstyle(1,BLUE);

bar(100,100,500,150);
setcolor(YELLOW);
rectangle(100,100,500,150);

for(j=1;j<10;j++)
{
for(i=1;i<=400;i=i+50)
{
randomize();
col=random(100);
setcolor(col);
setfillstyle(1,col);
sector(125+i,125,0,360,15,15);
delay(200);
setcolor(RED);
setfillstyle(1,RED);
sector(125+i,125,0,360,15,15);
}
}
}
