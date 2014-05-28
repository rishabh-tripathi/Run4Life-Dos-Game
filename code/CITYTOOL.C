#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<bios.h>
#include<string.h>
#include<dir.h>
#include<stdlib.h>
#include<time.h>


void house1(int x,int y,int col1,int col2)
{
//**********************************************************************************
//house 1
int i;
setlinestyle(0,0,1);
setcolor(col1);
setfillstyle(1,col1);
bar(x,y,x+50,y+50);
setcolor(col2);
setfillstyle(9,col2);
bar(x+5,y+5,x+45,y+45);
setcolor(col1);
for(i=1;i<27;i++)
{
line(x+i,y+50,(x+5)+i,y+100);
line((x+50)-i,y+50,(x+45)-i,y+100);
}
setcolor(col2);
line(x,y+50,x+50,y+50);
line(x+1,y+66,x+49,y+66);
line(x+3,y+82,x+47,y+82);
line(x+5,y+100,x+45,y+100);
line(x+5,y+98,x+45,y+98);
line(x+25,y+50,x+25,y+100);

setcolor(col2);
setfillstyle(1,col2);
bar(x+10,y+60,x+15,y+66);
bar(x+11,y+76,x+16,y+82);
bar(x+12,y+92,x+17,y+98);
bar(x+40,y+60,x+35,y+66);
bar(x+39,y+76,x+34,y+82);
bar(x+38,y+92,x+33,y+98);
//*************************************************************************************
}




void house2(int x,int y,int col1,int col2)
{
//*******************************************************************************
//house2
int i,j;
setlinestyle(0,0,1);
setcolor(7);
setfillstyle(1,7);
bar(x,y+180,x+70,y+220);

setcolor(col1);
setfillstyle(1,col1);
bar(x,y,x+70,y+110);
setcolor(col2);
setfillstyle(9,col2);
bar(x+5,y+5,x+65,y+105);
setcolor(col1);
setfillstyle(1,col1);
for(i=1;i<37;i++)
{
line(x+i,y+110,(x+10)+i,y+210);
line((x+70)-i,y+110,(x+60)-i,y+210);
}

setcolor(col2);
rectangle(x,y,x+70,y+110);
line(x,y+110,x+10,y+210);
line(x+70,y+110,x+60,y+210);
j=1;
for(i=1;i<=10;i++)
{
j+=10;
line(x+i,(y+110)+j,(x+70)-i,(y+110)+j);
}
line(x+10,y+110,x+20,y+210);
line(x+20,y+110,x+30,y+210);
line(x+60,y+110,x+50,y+210);
line(x+50,y+110,x+40,y+210);
//************************************************************************************
}








void house3(int x,int y,int col1,int col2)
{
//*******************************************************************************
//house3
int i,j;
setlinestyle(0,0,1);
setcolor(7);
setfillstyle(1,7);
bar(x,y+125,x+70,y+165);

setcolor(col1);
setfillstyle(1,col1);
bar(x,y,x+70,y+55);
setcolor(col2);
setfillstyle(9,col2);
bar(x+5,y+5,x+65,y+50);
setcolor(col1);
setfillstyle(1,col1);
for(i=1;i<37;i++)
{
line(x+i,y+55,(x+10)+i,y+155);
line((x+70)-i,y+55,(x+60)-i,y+155);
}

setcolor(col2);
rectangle(x,y,x+70,y+55);
line(x,y+55,x+10,y+155);
line(x+70,y+55,x+60,y+155);
j=1;
for(i=1;i<=10;i++)
{
j+=10;
line(x+i,(y+55)+j,(x+70)-i,(y+55)+j);
}
line(x+10,y+55,x+20,y+155);
line(x+15,y+55,x+25,y+155);
line(x+60,y+55,x+50,y+155);
line(x+55,y+55,x+45,y+155);
//************************************************************************************
}

















void house4(int x,int y,int col1,int col2)
{
int i;
setlinestyle(0,0,1);
setcolor(col1);
setfillstyle(1,col1);
bar(x,y,x+73,y+40);
setcolor(col2);
setfillstyle(9,col2);
bar(x+5,y+5,x+68,y+35);
rectangle(x,y,x+73,y+40);

setcolor(col1);
for(i=1;i<40;i++)
{
line(x+i,y+41,(x+5)+i,y+80);
line((x+73)-i,y+41,(x+68)-i,y+80);
}
setcolor(col2);
for(i=1;i<40;i+=15)
{
line(x+i,y+41,(x+5)+i,y+80);
line((x+73)-i,y+41,(x+68)-i,y+80);
}
line(x,y+55,x+73,y+55);
line(x,y+70,x+73,y+70);
}










void pco(int x,int y)
{
int i;
setcolor(8);
setlinestyle(0,0,1);
setfillstyle(1,8);
bar(x,y,x+30,y+30);
for(i=1;i<20;i++)
{
line(x+i,y+30,(x+5)+i,y+60);
line((x+30)-i,y+30,(x+25)-i,y+60);
}
setcolor(BLUE);
setfillstyle(1,BLUE);
line(x,y+30,x+5,y+60);
line(x+30,y+30,x+25,y+60);
rectangle(x,y,x+30,y+30);
for(i=1;i<10;i++)
{
line((x+5)+i,y+32,(x+7)+i,y+45);
line((x+25)-i,y+32,(x+23)-i,y+45);
}
setcolor(YELLOW);
setfillstyle(6,YELLOW);
putpixel(168,60,YELLOW);
settextstyle(2,0,2);
outtextxy(x+7,y+52,"P.C.O.");
bar(x+2,y+2,x+28,y+28);
}













void stop(int x,int y)
{
setcolor(RED);
setfillstyle(1,RED);
bar(x,y,x+10,y+10);
setcolor(8);
setfillstyle(1,8);
fillellipse(x+5,y+30,8,2);
setcolor(getbkcolor());
setlinestyle(0,0,3);
line(x+5,y+10,x+5,y+30);
}






















void signal(int x,int y)
{
setcolor(getbkcolor());
setfillstyle(1,getbkcolor());
bar(x,y,x+10,y+20);
setcolor(8);
setfillstyle(1,8);
fillellipse(x+5,y+40,8,2);
setcolor(getbkcolor());
setfillstyle(1,getbkcolor());
setlinestyle(0,0,3);
line(x+5,y+20,x+5,y+40);
setcolor(LIGHTRED);
setfillstyle(1,LIGHTRED);
fillellipse(x+5,y+4,1,1);
setcolor(YELLOW);
setfillstyle(1,YELLOW);
fillellipse(x+5,y+10,1,1);
setcolor(LIGHTGREEN);
setfillstyle(1,LIGHTGREEN);
fillellipse(x+5,y+16,1,1);
}














void streetlight(int x,int y)
{
setcolor(8);
setfillstyle(1,8);
fillellipse(x,y+30,8,2);
setcolor(getbkcolor());
setlinestyle(0,0,3);
line(x,y,x,y+30);
line(x,y,x+3,y);
setlinestyle(0,0,0);
ellipse(x+8,y,0,360,5,3);
setcolor(YELLOW);
setfillstyle(1,YELLOW);
fillellipse(x+8,y,4,2);
}








void streetlight1(int x,int y)
{
setcolor(8);
setfillstyle(1,8);
fillellipse(x,y+30,8,2);
setcolor(getbkcolor());
setlinestyle(0,0,3);
line(x,y,x,y+30);
line(x,y,x-3,y);
setlinestyle(0,0,0);
ellipse(x-8,y,0,360,5,3);
setcolor(YELLOW);
setfillstyle(1,YELLOW);
fillellipse(x-8,y,4,2);
}







