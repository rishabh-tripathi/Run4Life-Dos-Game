#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<bios.h>
#include<string.h>
#include<dir.h>
#include<stdlib.h>
#include<time.h>


void basicstructure1()
{
//basic structure

//****************************************************************************
//*******************************************************************************
int i;
int colo,col;
colo=random(100);
if(colo!=2 && colo!=20)
col=colo;
else
col=57;
setcolor(col);
setlinestyle(0,0,3);

for(i=1;i<=100;i++)
line(0,440+i,50,480);		 //left corner bottom line
setcolor(2);
line(0,440,50,480);

setfillstyle(1,col);
bar(0,0,10,480);     //left bar
setcolor(2);
line(10,0,10,450);





/*
setfillstyle(1,7);
bar(0,0,getmaxx(),15);  //upper bar
rectangle(0,0,getmaxx(),15);
  */
//display box






setcolor(col);
for(i=1;i<=100;i++)
line(60-i,0,0,50);        //left side corner upper line
setcolor(2);
line(60,0,10,44);

setcolor(col);
setlinestyle(0,0,3);
for(i=1;i<=100;i++)
line(getmaxx(),440+i,getmaxx()-50,480);   //right side corner line
setcolor(2);
line(getmaxx(),440,getmaxx()-50,480);

setfillstyle(1,col);                 //right side bar
bar(getmaxx()-10,0,getmaxx(),480);
setcolor(2);
line(getmaxx()-10,0,getmaxx()-10,450);

setcolor(col);
for(i=1;i<=100;i++)
line((getmaxx()-60)+i,0,getmaxx(),50);   //right side upper corner line
setcolor(2);
line(getmaxx()-60,0,getmaxx()-10,44);







/*
setcolor(7);
for(i=1;i<=400;i++)
{
line(80+i,14,110+i,50);                //main display box
line(560-i,14,530-i,50);
}
setcolor(2);
line(80,15,110,50);
line(560,15,530,50);             //main display box
line(110,50,530,50);

setcolor(BLUE);
setfillstyle(1,BLUE);
bar(120,8,520,40);
setcolor(57);                   //main display box
setfillstyle(7,57);
bar(135,8,505,40);

setcolor(YELLOW);
setlinestyle(0,0,1);
circle(125,33,5);
circle(515,33,5);            //display box nut
circle(125,15,5);
circle(515,15,5);
line(120,30,130,36);
line(510,33,520,33);
line(125,10,125,20);    //display box nut
line(518,10,512,20);
*/
//display box





setlinestyle(0,0,1);
setcolor(BROWN);
setfillstyle(1,BROWN);
sector(15,15,0,360,7,7);
sector(getmaxx()-15,15,0,360,7,7);        //body nuts
sector(15,468,0,360,7,7);
sector(getmaxx()-15,468,0,360,7,7);

setcolor(YELLOW);
circle(15,15,7);                                 //body nuts
circle(getmaxx()-15,15,7);
circle(15,468,7);
circle(getmaxx()-15,468,7);

line(11,9,20,18);
line(11,462,20,471);                        //body nuts
line(getmaxx()-20,14,getmaxx()-10,18);
line(getmaxx()-15,461,getmaxx()-15,475);

setlinestyle(0,0,3);
setcolor(2);
rectangle(10,80,50,210);
rectangle(10,280,50,410);
rectangle(getmaxx()-50,80,getmaxx()-10,210);         //side bar
rectangle(getmaxx()-50,280,getmaxx()-10,410);

setcolor(col);
setfillstyle(1,col);
bar(5,82,49,208);
bar(5,282,49,408);                                 //side bar
bar(getmaxx()-48,82,getmaxx(),208);
bar(getmaxx()-48,282,getmaxx(),408);


setlinestyle(0,0,1);
setcolor(2);
setfillstyle(1,2);
bar(2,84,47,206);
bar(2,284,47,406);
bar(getmaxx()-46,84,getmaxx()-2,206);  //side bar design   blue design
bar(getmaxx()-46,284,getmaxx()-2,406);
//**************************************************************************************
//*******************************************************************************************


//graphs design
setcolor(YELLOW);
//*****************************************
line(15,100,15,200);
line(15,200,45,200);
for(i=1;i<=100;i+=4)
line(15,100+i,20,100+i);
settextstyle(2,1,5);
outtextxy(0,145,"Coins :");

setfillstyle(1,58);
bar(25,100,40,133);             //bar
setfillstyle(1,60);
bar(25,133,40,166);
setfillstyle(1,4);
bar(25,166,40,199);

//********************************
line(15,300,15,400);
line(15,400,45,400);
for(i=1;i<=100;i+=4)
line(15,300+i,20,300+i);
settextstyle(2,1,5);
outtextxy(0,345,"Speed :");

setfillstyle(1,57);
bar(25,395,40,399);

//************************************
line(getmaxx()-15,100,getmaxx()-15,200);
line(getmaxx()-15,200,getmaxx()-45,200);
for(i=1;i<=100;i+=4)
line(getmaxx()-15,100+i,getmaxx()-20,100+i);
settextstyle(2,1,5);
outtextxy(getmaxx()-16,130,"Booster :");
setfillstyle(1,58);
bar(getmaxx()-25,100,getmaxx()-40,133);             //bar
setfillstyle(1,60);
bar(getmaxx()-25,133,getmaxx()-40,166);
setfillstyle(1,4);
bar(getmaxx()-25,166,getmaxx()-40,199);


//******************************************
line(getmaxx()-15,300,getmaxx()-15,400);
line(getmaxx()-15,400,getmaxx()-45,400);
for(i=1;i<=100;i+=4)
line(getmaxx()-15,300+i,getmaxx()-20,300+i);
settextstyle(2,1,5);
outtextxy(getmaxx()-16,353,"Fuel :");

setfillstyle(1,58);
bar(getmaxx()-25,300,getmaxx()-40,333);             //bar
setfillstyle(1,60);
bar(getmaxx()-25,333,getmaxx()-40,366);
setfillstyle(1,4);
bar(getmaxx()-25,366,getmaxx()-40,399);
//***********************************
settextstyle(2,0,4);
outtextxy(20,85,"200");
outtextxy(5,285,"2 m/h");
outtextxy(getmaxx()-40,85,"100.00%");
outtextxy(getmaxx()-40,285,"100.00%");

//***************************************************************************
//gear plate
setcolor(2);
circle(45,218,5);
circle(42,233,5);
circle(37,247,5);
circle(30,260,5);
circle(20,270,5);
settextstyle(2,1,6);
outtextxy(10,210,"Gear");
line(16,215,16,242);
settextstyle(2,0,5);
outtextxy(40,260,"N");

setcolor(2);
setfillstyle(1,2);
fillellipse(45,218,3,3);
fillellipse(42,233,3,3);
fillellipse(37,247,3,3);
fillellipse(30,260,3,3);
fillellipse(20,270,3,3);
//*************************************************************************************************
//life
setcolor(BLUE);
settextstyle(2,1,6);
outtextxy(getmaxx()-30,210,"Left");
outtextxy(getmaxx()-47,210,"Life");
line(getmaxx()-28,210,getmaxx()-28,265);
line(getmaxx()-45,250,getmaxx()-10,250);
settextstyle(2,0,4);
outtextxy(getmaxx()-42,252,"10");





//fire
setcolor(BLUE);
settextstyle(2,1,5);
outtextxy(getmaxx()-55,45,"Fire");
line(getmaxx()-40,45,getmaxx()-40,78);
settextstyle(2,0,4);
outtextxy(getmaxx()-35,45,"Left");
setcolor(BLUE);
line(getmaxx()-40,57,getmaxx()-10,57);



}






