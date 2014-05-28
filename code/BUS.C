#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<bios.h>
#include<string.h>
#include<dir.h>
#include<stdlib.h>
void bus1()
{
int col;
int i;
col=RED;
if(col==0)
col=5;

//****************************************************************************************
//*****************************************************************************************
//************bus1*************************************************************************
setcolor(BLUE);
setlinestyle(0,0,3);
arc(209,150,120,250,25);
arc(242,150,290,70,25);
arc(209,275,120,250,25);   //tyres
arc(242,275,290,70,25);


//setlinestyle(0,0,1);
setcolor(col);
for(i=1;i<=20;i++)
arc(225,230-i,240,300,80);
setcolor(56);
arc(225,230,240,300,80);
setcolor(61);
for(i=1;i<4;i++)
arc(225,227-i,245,295,80);
setcolor(56);

setfillstyle(1,col);
bar(186,120,264,290);
setlinestyle(0,0,1);


setlinestyle(0,0,3);
setcolor(col);
for(i=1;i<50;i++)
{
arc(192+i,120,90,180,5);
arc(258-i,120,0,90,5);
}
setcolor(56);
arc(192,120,90,180,5);
arc(258,120,0,90,5);
line(192,115,258,115);
setcolor(58);
arc(225,221,240,300,80);

setlinestyle(0,0,1);
setcolor(3);
for(i=1;i<80;i+=6)
rectangle(186+i,120,264-i,290);

//setcolor(58);
//setlinestyle(0,0,1);
//rectangle(181,114,268,311);

//area defined
//***************************************************************************************
//*******************************************************************************************
}


void bus2()
{
//**********************************************************************************
//*************bus 2********************************************************************
int i;
int col;
col=random(100);

setcolor(BLACK);
setlinestyle(0,0,3);
arc(409,150,120,250,25);
arc(442,150,290,70,25);
arc(409,275,120,250,25);   //tyres
arc(442,275,290,70,25);


//setlinestyle(0,0,1);
setcolor(col);
for(i=1;i<=20;i++)
arc(425,230-i,240,300,80);
setcolor(56);
arc(425,230,240,300,80);
setcolor(61);
for(i=1;i<4;i++)
arc(425,227-i,245,295,80);
setcolor(56);

setfillstyle(1,col);
bar(386,120,464,290);
setlinestyle(0,0,1);


setlinestyle(0,0,3);
setcolor(col);
for(i=1;i<50;i++)
{
arc(392+i,120,90,180,5);
arc(458-i,120,0,90,5);
}
setcolor(56);
arc(392,120,90,180,5);
arc(458,120,0,90,5);
line(392,115,458,115);
setcolor(58);
arc(425,221,240,300,80);





setcolor(7);
setfillstyle(1,7);
bar(386,120,392,290);
bar(457,120,463,290);

setlinestyle(0,0,3);
setcolor(col);
for(i=1;i<150;i+=20)
{
line(386,130+i,392,130+i);
line(457,130+i,463,130+i);
}

setcolor(56);
setlinestyle(0,0,1);

line(392,120,392,290);
line(457,120,457,290);
line(386,120,463,120);

setfillstyle(1,56);
bar(400,150,447,240);
setcolor(col);
rectangle(400+2,150+2,447-2,240-2);

for(i=1;i<100;i+=4)
line(402,152+i,445,152+i);

setcolor(56);
setlinestyle(0,0,3);
line(410,150,410,112);
line(435,150,435,112);

for(i=1;i<40;i+=6)
line(410,112+i,435,112+i);

setcolor(7);
setfillstyle(1,7);
bar(415-2,255-2,435+2,270+2);

setcolor(56);
setfillstyle(1,56);
bar(415,255,435,270);
setcolor(col);
setlinestyle(0,0,1);
line(415,255,435,270);
line(435,255,415,270);

setcolor(col);
setfillstyle(1,col);
bar(385,285,465,290);


//rectangle(381,111,468,311);
//area defined
//*********************************************************************************************
//************************************************************************************

}




/*
main()
{
int gd=VGA,gm=VGAHI,i,errorcode;
int busarea;
char *bus;
initgraph(&gd,&gm,"c:\bagger");
errorcode = graphresult();

if (errorcode != grOk)
{
   printf("Graphics error: %s\n", grapherrormsg(errorcode));
   printf("Press any key to halt:");
   getch();

   exit(1);
}

bus1();
bus2();
getch();
} */