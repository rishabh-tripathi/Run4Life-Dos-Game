#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<time.h>
#include<dos.h>
#include<bios.h>
#include<string.h>
#include<stdlib.h>

void car(int x,int y)
{
int poly[10],pol[18],i,j;
setcolor(BLACK);
setlinestyle(0,0,0);

poly[0]=x-3;
poly[1]=y-50;   //front bonet
poly[2]=x-10;
poly[3]=y-10;
poly[4]=x+10;
poly[5]=y-10;
poly[6]=x+3;
poly[7]=y-50;
poly[8]=x-3;
poly[9]=y-50;



pol[0]=x-10;
pol[1]=y-10;
pol[2]=x-10;
pol[3]=y;
pol[4]=x-7;
pol[5]=y+10;         //center body
pol[6]=x-7;
pol[7]=y+20;
pol[8]=x+7;
pol[9]=y+20;
pol[10]=x+7;
pol[11]=y+10;
pol[12]=x+10;
pol[13]=y;
pol[14]=x+10;
pol[15]=y-10;
pol[16]=x-10;
pol[17]=y-10;


setcolor(BROWN);
for(i=1;i<=34;i++)      //back color
line((x-17)+i,y+35,(x-17)+i,y+69);


setfillstyle(1,BLACK);          //body color
bar(x-10,y-10,x+10,y+55);


setcolor(BROWN);            //front round
sector(x,y-50,0,180,2,2);


line(x-10,y-10,x-25,y-5);    //left wings of car
line(x-25,y-5,x-25,y+40);
line(x-25,y+40,x-17,y+41);
line(x-17,y+41,x-17,y+80);
line(x-17,y+80,x-15,y+80);
line(x-15,y+80,x-15,y+70);
setcolor(RED);
for(i=1;i<=44;i+=1)         //color of wing
line(x-10,(y-10)+i,x-25,(y-5)+i);

setcolor(MAGENTA);            //design
for(i=1;i<=44;i+=3)
line(x-10,(y-10)+i,x-25,(y-5)+i);



line(x+10,y-10,x+25,y-5);
line(x+25,y-5,x+25,y+40);     //right wings of car
line(x+25,y+40,x+17,y+41);
line(x+17,y+41,x+17,y+80);
line(x+17,y+80,x+15,y+80);
line(x+15,y+80,x+15,y+70);
setcolor(RED);
for(i=1;i<=44;i+=1)         //color of wing
line(x+10,(y-10)+i,x+25,(y-5)+i);

setcolor(MAGENTA);
for(i=1;i<=44;i+=3)          //design
line(x+10,(y-10)+i,x+25,(y-5)+i);


line(x-15,y+70,x+15,y+70);
line(x-15,y+77,x+15,y+77);        //back booster plate


//x=305 y=200
setcolor(BROWN);
line(x-23,y-50,x+23,y-50);
line(x-23,y-50,x-23,y-55);                //front bumpher
line(x-23,y-55,x-25,y-55);
line(x-25,y-55,x-25,y-40);

setcolor(BROWN);
for(i=1;i<=50;i++)     //color
line((x-25)+i,y-50,(x-25)+i,y-42);


setcolor(BROWN);
line(x-25,y-40,x-20,y-40);
line(x-20,y-40,x-20,y-42);

line(x+23,y-50,x+23,y-55);
line(x+23,y-55,x+25,y-55);      //front bumpher
line(x+25,y-55,x+25,y-40);

line(x+25,y-40,x+20,y-40);
line(x+20,y-40,x+20,y-42);
line(x-20,y-42,x+20,y-42);


for(i=1;i<=10;i++)
{
setcolor(BLUE);
arc(x-30,(y-5)-i,70,110,20);         //tyres
arc(x-30,(y-50)+i,250,292,20);

arc(x+30,(y-5)-i,70,110,20);
arc(x+30,(y-50)+i,250,292,20);

arc(x-30,(y+77)-i,70,110,20);            //tyres
arc(x-30,(y+32)+i,250,292,20);

arc(x+30,(y+77)-i,70,110,20);
arc(x+30,(y+32)+i,250,292,20);
}
setcolor(YELLOW);
for(i=1;i<=10;i+=3)
{
arc(x-30,(y-5)-i,70,110,20);         //design
arc(x-30,(y-50)+i,250,292,20);

arc(x+30,(y-5)-i,70,110,20);
arc(x+30,(y-50)+i,250,292,20);

arc(x-30,(y+77)-i,70,110,20);            //design
arc(x-30,(y+32)+i,250,292,20);

arc(x+30,(y+77)-i,70,110,20);
arc(x+30,(y+32)+i,250,292,20);

}

setcolor(BLUE);

setlinestyle(0,0,3);

line(x-22,y-28,x+22,y-28);
line(x-22,y+54,x-17,y+54);     //tyres lead
line(x+22,y+54,x+17,y+54);

setcolor(BROWN);
setfillstyle(1,BROWN);
fillpoly(5,poly);         //front bonet
setlinestyle(0,0,0);
setcolor(BROWN);
drawpoly(5,poly);

setcolor(BROWN);
setfillstyle(1,BROWN);
fillpoly(9,pol);

//********************************
setcolor(YELLOW);
setfillstyle(1,YELLOW);
fillellipse(x,y-2,6,8);
setcolor(BLUE);
setlinestyle(0,0,3);              //driver
ellipse(x,y-2,0,180,5,6);
ellipse(x,y-2,0,180,6,7);
ellipse(x,y-2,0,180,7,8);

setlinestyle(0,0,0);
ellipse(x,y-2,0,360,7,9);

setcolor(GREEN);
setfillstyle(1,GREEN);
fillellipse(x,y-2,3,4);

//*********************************

setcolor(YELLOW);
line(x-5,y+10,x-5,y+20);
line(x,y+10,x,y+20);
line(x+5,y+10,x+5,y+20);
			  //driver's back machineies
line(x-5,y+10,x+5,y+10);
line(x-5,y+12,x+5,y+12);
line(x-5,y+14,x+5,y+14);
line(x-5,y+16,x+5,y+16);
line(x-5,y+18,x+5,y+18);
line(x-5,y+20,x+5,y+20);
//*****************************************

setcolor(BROWN);
setfillstyle(1,BROWN);
bar(x-7,y+30,x-2,y+50);
bar(x+2,y+30,x+7,y+50);

setcolor(BLUE);
circle(x-4,y+34,2);
circle(x-4,y+38,2);
circle(x-4,y+42,2);
circle(x-4,y+46,2);

circle(x+5,y+34,2);
circle(x+5,y+38,2);
circle(x+5,y+42,2);              // back machine
circle(x+5,y+46,2);

setcolor(WHITE);

circle(x-4,y+34,1);
circle(x-4,y+38,1);
circle(x-4,y+42,1);
circle(x-4,y+46,1);

circle(x+5,y+34,1);
circle(x+5,y+38,1);
circle(x+5,y+42,1);              // back machine
circle(x+5,y+46,1);
//**************************

setcolor(YELLOW);
for(i=1;i<20;i+=2)           //back line design
line((x-10)+i,y+56,(x-10)+i,y+70);
//*******************************

setcolor(RED);
setfillstyle(1,RED);
bar(x-20,y+65,x+20,y+72);
			     //back bumpher and compney name
setcolor(WHITE);
settextstyle(2,0,2);
outtextxy(x-20,y+65,"///FORD///");
//******************************************

line(x,y-45,x-7,y-15);
line(x,y-45,x+7,y-15);     //bonet design
line(x,y-35,x-7,y-15);
line(x,y-35,x+7,y-15);

//*******************************************

setcolor(BROWN);
for(i=1;i<6;i++)
{
line((x-15)+i,y+73,(x-15)+i,y+76);
line((x+9)+i,y+73,(x+9)+i,y+76);             //boosters
line((x-3)+i,y+73,(x-3)+i,y+76);
}
setcolor(YELLOW);
circle(x-6,y+75,1);
circle(x+6,y+75,1);

setcolor(YELLOW);
settextstyle(2,0,2);
outtextxy(x-20,y-51,"////");
outtextxy(x+5,y-51,"////");
//**********************************************

}

//**********************************************************************************************************
void carfire()
{
int i;
setcolor(YELLOW);
setlinestyle(0,0,1);
for(i=1;i<=5;i+=2)
{
line(335-i,120+i,335,144);
line(335+i,120+i,335,144);
}
//rectangle(330,120,340,144);      area defined
}

void boo(int x,int y)       //carbooster
{
int i;
				for(i=1;i<=3;i++)
				{
				setcolor(57);
				line(x,y,x-i,(y+20)-i);
				line(x,y,x+i,(y+20)-i);
				}

				for(i=1;i<=3;i++)
				{
				setcolor(57);
				line(x+12,y,(x+12)-i,(y+20)-i);
				line(x+12,y,(x+12)+i,(y+20)-i);
				}
}



void drum(int x,int y)
{
int c,i;
c=getcolor();
setcolor(BROWN);
for(i=1;i<40;i++)
{
arc(x-i,y,160,200,40);
}
for(i=1;i<40;i+=10)
{
setcolor(YELLOW);
arc(x-i,y,160,200,40);
}
setcolor(BROWN);
arc(x-76,y,340,20,40);
setcolor(c);
}
//************************************************************************************


void feuldrum(int x,int y)
{
int c,i;
c=getcolor();
setcolor(YELLOW);
for(i=1;i<40;i++)
{
arc(x-i,y,160,200,40);
}
for(i=1;i<40;i+=10)
{
setcolor(BLUE);
arc(x-i,y,160,200,40);
}
setcolor(BROWN);
arc(x-76,y,340,20,40);
setcolor(c);
}
//************************************************************************************

void barr()
{
setcolor(YELLOW);
line(165,95,165,125);
line(475,95,475,125);
setcolor(RED);
setfillstyle(1,RED);
setlinestyle(0,0,3);
line(150,100,490,100);
line(150,103,490,103);
bar(300-10,100,340,120);
setcolor(YELLOW);
line(160,95,160,125);
line(480,95,480,125);
settextstyle(2,0,5);
outtextxy(300,100,"STOP");
}



	 /*
main()
{
int gd=VGA,gm=VGAHI,i,errorcode;
//int x=300,y=200;
initgraph(&gd,&gm,"c:\bagger");

errorcode = graphresult();

if (errorcode != grOk)
{
   printf("Graphics error: %s\n", grapherrormsg(errorcode));
   printf("Press any key to halt:");
   getch();

   exit(1);
}

roadstru1();
sean7();

//***************************************************************************

//car(335,200);
//rectangle(298,144,372,280);



getch();
}          */