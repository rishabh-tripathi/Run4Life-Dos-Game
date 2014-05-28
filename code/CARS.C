#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<bios.h>
#include<string.h>
#include<dir.h>
#include<stdlib.h>

void car1()
{
int i;
int col;
int j;
col=random(15);
if(col==2)
{
setcolor(RED);
}
else
{
setcolor(col);
}
for(i=1;i<50;i++)
{
line(200+i,150,196+i,180);
line(250-i,150,254-i,180);
line(196+i,180,196+i,230);
line(254-i,180,254-i,230);
line(196+i,230,200+i,290);
line(254-i,230,250-i,290);

}
setcolor(BLUE);
line(200,150,250,150);
line(200,150,196,180);
line(250,150,254,180);

line(196,180,196,230);
line(254,180,254,230);

line(196,230,200,290);
line(254,230,250,290);
for(i=1;i<6;i++)
{
line(200,290-i,225,293-i);
line(250,290-i,225,293-i);
}

for(i=1;i<=5;i++)
ellipse(225,235-i,185,355,24-i,4);
for(i=1;i<25;i++)
{
line(203+i,235,208+i,220);
line(247-i,235,242-i,220);
}
for(i=1;i<15;i++)
{
line(200,230-i,206,213-i);
line(250,230-i,244,213-i);
}
for(i=1;i<10;i++)
{
line(200,205-i,206,188-i);
line(250,205-i,244,188-i);
}
for(i=1;i<10;i++)
{
line(200,178+i,206,178+i);
line(250,178+i,244,178+i);
}
setlinestyle(0,0,3);
line(201,180,201,195);
line(249,180,249,195);

setlinestyle(0,0,1);
for(i=1;i<25;i++)
{
line(202+i,170,208+i,175);
line(248-i,170,242-i,175);
}
for(i=1;i<25;i++)
{
line(203+i,158,202+i,170);
line(247-i,158,248-i,170);
}
setcolor(YELLOW);
j=1;
for(i=1;i<25;i+=3)
{
line(205+j,250+i,223,252+i);
line(245-j,250+i,227,252+i);
j++;
}
circle(205,288,2);
circle(245,288,2);
circle(210,288,2);
circle(240,288,2);

setcolor(56);
setlinestyle(0,0,3);
line(200,150,250,150);
setlinestyle(0,0,1);
//rectangle(195,147,255,295);
//area defined
//*********************************************************************************************************
//************************************************************************************************************
}









void pcar1()
{
int i;
//***********************************************************************************************
//******************************************************************************************
//police car
setlinestyle(0,0,1);

setcolor(BLUE);
for(i=1;i<5;i++)
ellipse(425,150+i,0,180,30,9);


setcolor(WHITE);
for(i=1;i<10;i++)
ellipse(425,150+i,0,180,30,5);

for(i=1;i<40;i++)
{
line(395+i,150,390+i,180);
line(455-i,150,460-i,180);
line(390+i,180,390+i,230);
line(460-i,180,460-i,230);
line(390+i,230,395+i,282);
line(460-i,230,455-i,282);
}


setcolor(BLUE);
for(i=1;i<7;i++)
ellipse(425,273+i,180,360,30,9);

ellipse(425,150,0,180,30,9);
ellipse(425,150,0,180,30,5);

line(395,150,390,180);
line(455,150,460,180);

line(390,180,390,230);
line(460,180,460,230);

line(390,230,395,280);
line(460,230,455,280);

ellipse(425,279,180,360,30,9);
ellipse(425,273,180,360,30,9);

for(i=1;i<10;i++)
ellipse(425,240-i,180,360,25-i,7);

for(i=1;i<30;i++)
{
line(400+i,240,408+i,220);
line(450-i,240,442-i,220);
}

line(390+4,180,390+4,230);
line(460-4,180,460-4,230);

for(i=1;i<25;i++)
{
line(394,180+i,405,185+i);
line(394,235-i,406,210-i);
line(454,180+i,445,185+i);
line(456,235-i,446,210-i);
}

for(i=1;i<25;i++)
{
line(400+i,175,412+i,182);
line(450-i,175,438-i,182);
}
for(i=1;i<25;i++)
ellipse(425,175,0,180,24-i,15-i);

setcolor(YELLOW);
setfillstyle(1,YELLOW);
fillellipse(408,283,5,2);
fillellipse(442,283,5,2);
setcolor(LIGHTRED);
setfillstyle(1,LIGHTRED);
fillellipse(398,280,2,1);
fillellipse(452,280,2,1);

setcolor(BLUE);
for(i=1;i<10;i++)
{
line(410+i,262+i,425,265+i);
line(440-i,262+i,425,265+i);
}
for(i=1;i<20;i+=2)
{
line(398+i,250+i,402+i,250+i);
line(448-i,250+i,452-i,250+i);
}
settextstyle(2,0,4);
outtextxy(408,245,"POLICE");

for(i=1;i<20;i+=2)
{
line(400-i/4,152+i,420-i,150+i);
line(450+i/4,152+i,430+i,150+i);
}
setcolor(RED);
setfillstyle(1,RED);
bar(412,202,421,212);
setcolor(BLUE);
setfillstyle(1,BLUE);
bar(430,202,439,212);
setcolor(BLACK);
rectangle(412,202,439,212);
//search light
/*
setcolor(LIGHTRED);
setfillstyle(1,LIGHTRED);
fillellipse(416,207,2,2);
setcolor(LIGHTBLUE);
setfillstyle(1,LIGHTBLUE);
fillellipse(434,207,2,2);
  */


setlinestyle(0,0,1);
//setcolor(1);
//rectangle(389,140,461,289);
//area defined
//****************************************************************************************
//*********************************************************************************************************
}





void car2()
{
int i,col,j;
//***************************************************************************************
//*************************************************************************************************************
//car1
col=random(15);
if(col==2)
{
setcolor(GREEN);
}
else
{
setcolor(col);
}
for(i=1;i<50;i++)
{
line(200+i,150,196+i,180);
line(250-i,150,254-i,180);
line(196+i,180,196+i,230);
line(254-i,180,254-i,230);
line(196+i,230,200+i,290);
line(254-i,230,250-i,290);

}
setcolor(BLUE);
line(200,150,250,150);
line(200,150,196,180);
line(250,150,254,180);

line(196,180,196,230);
line(254,180,254,230);

line(196,230,200,290);
line(254,230,250,290);
for(i=1;i<6;i++)
{
line(200,290-i,225,293-i);
line(250,290-i,225,293-i);
}

for(i=1;i<=5;i++)
ellipse(225,235-i,185,355,24-i,4);
for(i=1;i<25;i++)
{
line(203+i,235,208+i,220);
line(247-i,235,242-i,220);
}
for(i=1;i<15;i++)
{
line(200,230-i,206,213-i);
line(250,230-i,244,213-i);
}
for(i=1;i<10;i++)
{
line(200,205-i,206,188-i);
line(250,205-i,244,188-i);
}
for(i=1;i<10;i++)
{
line(200,178+i,206,178+i);
line(250,178+i,244,178+i);
}
setlinestyle(0,0,3);
line(201,180,201,195);
line(249,180,249,195);

setlinestyle(0,0,1);
for(i=1;i<25;i++)
{
line(202+i,170,208+i,175);
line(248-i,170,242-i,175);
}
for(i=1;i<25;i++)
{
line(203+i,158,202+i,170);
line(247-i,158,248-i,170);
}
setcolor(YELLOW);
j=1;
for(i=1;i<25;i+=3)
{
line(205+j,250+i,223,252+i);
line(245-j,250+i,227,252+i);
j++;
}
circle(205,288,2);
circle(245,288,2);
circle(210,288,2);
circle(240,288,2);

setcolor(56);
setlinestyle(0,0,3);
line(200,150,250,150);
setlinestyle(0,0,1);
//rectangle(195,147,255,295);
//area defined
//*********************************************************************************************************
}





void car3()
{
int i,j,col;
//************************************************************************************************************
//car2

setlinestyle(0,0,1);

setcolor(BLUE);
for(i=1;i<5;i++)
ellipse(425,150+i,0,180,30,9);


col=random(15);
if(col==2)
{
setcolor(LIGHTBLUE);
}
else
{
setcolor(col);
}


for(i=1;i<10;i++)
ellipse(425,150+i,0,180,30,5);

for(i=1;i<40;i++)
{
line(395+i,150,390+i,180);
line(455-i,150,460-i,180);
line(390+i,180,390+i,230);
line(460-i,180,460-i,230);
line(390+i,230,395+i,282);
line(460-i,230,455-i,282);
}


setcolor(BLUE);
for(i=1;i<7;i++)
ellipse(425,273+i,180,360,30,9);

ellipse(425,150,0,180,30,9);
ellipse(425,150,0,180,30,5);

line(395,150,390,180);
line(455,150,460,180);

line(390,180,390,230);
line(460,180,460,230);

line(390,230,395,280);
line(460,230,455,280);

ellipse(425,279,180,360,30,9);
ellipse(425,273,180,360,30,9);

for(i=1;i<10;i++)
ellipse(425,240-i,180,360,25-i,7);

for(i=1;i<30;i++)
{
line(400+i,240,408+i,220);
line(450-i,240,442-i,220);
}

line(390+4,180,390+4,230);
line(460-4,180,460-4,230);

for(i=1;i<25;i++)
{
line(394,180+i,405,185+i);
line(394,235-i,406,210-i);
line(454,180+i,445,185+i);
line(456,235-i,446,210-i);
}

for(i=1;i<25;i++)
{
line(400+i,175,412+i,182);
line(450-i,175,438-i,182);
}
for(i=1;i<25;i++)
ellipse(425,175,0,180,24-i,15-i);

setcolor(YELLOW);
setfillstyle(1,YELLOW);
fillellipse(408,283,5,2);
fillellipse(442,283,5,2);
setlinestyle(0,0,1);

//setcolor(1);
//rectangle(389,140,461,289);
//area defined

//***************************************************************************************
//***********************************************************************************
}


void fcar()
{
int i,col,j;
//front car**************************************************************************
//***************************************************************************************

col=random(15);
if(col==2)
{
setcolor(57);
}
else
{
setcolor(col);
}
for(i=1;i<40;i++)
{
line(200+i,150,195+i,190);
line(250-i,150,255-i,190);

line(195+i,190,195+i,230);
line(255-i,190,255-i,230);

line(195+i,230,200+i,270);
line(255-i,230,250-i,270);
}

for(i=1;i<7;i++)
ellipse(225,272-i,180,360,25,4);


setcolor(BLUE);
for(i=1;i<7;i++)
ellipse(225,150+i,0,180,25,4);

line(200,150,195,190);
line(250,150,255,190);

line(195,190,195,230);
line(255,190,255,230);

line(195,230,200,270);
line(255,230,250,270);

for(i=1;i<7;i++)
ellipse(225,271,180,360,25,4+i);

for(i=1;i<5;i++)
ellipse(225,188+i,0,180,20-i,5);

for(i=1;i<30;i++)
{
line(205+i,188,210+i,200);
line(245-i,188,240-i,200);
}
for(i=1;i<22;i++)
{
line(200,190+i,208,208+i);
line(250,190+i,242,208+i);
line(200,235-i,208,230-i);
line(250,235-i,242,230-i);
}
for(i=1;i<20;i++)
{
line(204+i,248,212+i,235);
line(246-i,248,238-i,235);
}
for(i=1;i<10;i++)
ellipse(225,248-i,180,360,20-i,8);


setcolor(YELLOW);
setfillstyle(1,YELLOW);
fillellipse(210,150,5,1);    //head light
fillellipse(240,150,5,1);

setcolor(LIGHTRED);
setfillstyle(1,LIGHTRED);
fillellipse(210,276,2,1);               // back light
fillellipse(240,276,2,1);

//rectangle(195,145,255,282);
//area defined

//***********************************************************************************************
//******************************************************************************************
}


void pfcar()
{
int i;
//front car**************************************************************************
//***************************************************************************************

setcolor(WHITE);
for(i=1;i<40;i++)
{
line(200+i,150,195+i,190);
line(250-i,150,255-i,190);

line(195+i,190,195+i,230);
line(255-i,190,255-i,230);

line(195+i,230,200+i,270);
line(255-i,230,250-i,270);
}

for(i=1;i<7;i++)
ellipse(225,272-i,180,360,25,4);


setcolor(BLUE);
for(i=1;i<7;i++)
ellipse(225,150+i,0,180,25,4);

line(200,150,195,190);
line(250,150,255,190);

line(195,190,195,230);
line(255,190,255,230);

line(195,230,200,270);
line(255,230,250,270);

for(i=1;i<7;i++)
ellipse(225,271,180,360,25,4+i);

for(i=1;i<5;i++)
ellipse(225,188+i,0,180,20-i,5);

for(i=1;i<30;i++)
{
line(205+i,188,210+i,200);
line(245-i,188,240-i,200);
}
for(i=1;i<22;i++)
{
line(200,190+i,208,208+i);
line(250,190+i,242,208+i);
line(200,235-i,208,230-i);
line(250,235-i,242,230-i);
}
for(i=1;i<20;i++)
{
line(204+i,248,212+i,235);
line(246-i,248,238-i,235);
}
for(i=1;i<10;i++)
ellipse(225,248-i,180,360,20-i,8);


setcolor(YELLOW);
setfillstyle(1,YELLOW);
fillellipse(210,150,5,1);    //head light
fillellipse(240,150,5,1);

setcolor(LIGHTRED);
setfillstyle(1,LIGHTRED);
fillellipse(210,276,2,1);               // back light
fillellipse(240,276,2,1);

setcolor(BLUE);
for(i=1;i<10;i++)
{
line(220+i,160,215,165+i);
line(230-i,160,235,165+i);
}
for(i=1;i<14;i+=2)
{
line(215-i,165+i,215-i,175+i);
line(235+i,165+i,235+i,175+i);
}
for(i=1;i<16;i+=2)
{
line(205-i/4,270-i,220-i,272-i);
line(245+i/4,270-i,230+i,272-i);
}
settextstyle(2,0,3);
outtextxy(213,176,"POLICE");

setcolor(RED);
setfillstyle(1,RED);
bar(212,205,221,215);
setcolor(BLUE);
setfillstyle(1,BLUE);
bar(229,205,238,215);

rectangle(212,205,238,215);
/*while(!kbhit())
{
setcolor(LIGHTRED);
setfillstyle(1,LIGHTRED);
fillellipse(216,210,2,2);
setcolor(LIGHTBLUE);
setfillstyle(1,LIGHTBLUE);   //search light
fillellipse(234,210,2,2);
delay(200);
setcolor(RED);
setfillstyle(1,RED);
fillellipse(216,210,2,2);
setcolor(BLUE);
setfillstyle(1,BLUE);   //search light
fillellipse(234,210,2,2);
delay(200);
}  */


//rectangle(195,145,255,282);
//area defined
//****************************************************************************************
//*********************************************************************************************************
}


/*
main()
{
int gd=VGA,gm=VGAHI,i,errorcode,j;
int busarea,col;
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

setfillstyle(8,WHITE);            //background color and style
bar(1,1,getmaxx(),getmaxy());

setfillstyle(7,YELLOW);      //bagger plate
bar(150,5,500,55);

setcolor(BLUE);
for(i=1;i<=5;i++)
{                          //border of bagger plate
setfillstyle(1,BLUE);
rectangle(150-i,5-i,500+i,55+i);
}

settextstyle(1,0,5);
setcolor(WHITE);          // the bagger writen
outtextxy(200,3,"The Bagger");


setcolor(WHITE);          //work place designed
setfillstyle(1,WHITE);
bar(100,100,550,350);


setcolor(BLUE);
for(i=1;i<=5;i++)
{                           //work place border
rectangle(100-i,100-i,550+i,350+i);
}
car2();
car3();



getch();
getch();
}          */