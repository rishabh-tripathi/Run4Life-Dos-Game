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
herospk()
{
setlinestyle(0,0,3);
setcolor(WHITE);
arc(323,190,90,170,25); //bb
setcolor(RED);
arc(450,220,290,360,25);  //H
setlinestyle(0,0,1);
}
boss_spk()
{
setlinestyle(0,0,3);
setcolor(WHITE);
arc(450,220,290,360,25);  //H
setcolor(RED);
arc(323,190,90,170,25); //bb
setlinestyle(0,0,1);
}


main()
{
int gd=VGA,gm=VGAHI,i,errorcode,j;
initgraph(&gd,&gm,"");
errorcode = graphresult();
/* an error occurred */
if (errorcode != grOk)
{
   printf("Graphics error: %s\n", grapherrormsg(errorcode));
   printf("Press any key to halt:");
   getch();

   exit(1);    /* terminate with an error code */
}


delay(1000);

setfillstyle(2,LIGHTGREEN);            //background color and style
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
outtextxy(200,3,"Run 4 Life");


setcolor(WHITE);          //work place designed
setfillstyle(1,WHITE);
bar(100,100,550,350);


setcolor(BLUE);
for(i=1;i<=5;i++)
{                           //work place border
rectangle(100-i,100-i,550+i,350+i);
}


setcolor(getbkcolor());                 //man's face
ellipse(300,190,0,360,35,40);

setfillstyle(1,getbkcolor());        //man's hat

for(i=1;i<=33;i++)
{
arc(300,172,0,180,i);
}

for(i=1;i<=12;i+=2)
{
 setlinestyle(0,0,0);                    //his hair
 arc(322-i,195,150,200,50);
}
for(i=1;i<=10;i+=5)                    //his hair
{
 setlinestyle(0,0,3);
 arc(322-i,195,150,200,50);
}

for(i=1;i<=12;i+=2)
{
 setlinestyle(0,0,0);                    //his hair
 arc(277+i,195,338,30,50);
}
for(i=1;i<=10;i+=5)                    //his hair
{
 setlinestyle(0,0,3);
  arc(277+i,195,338,30,50);
}

fillellipse(285,185,18,10);   //his eye masks
fillellipse(315,185,18,10);

setcolor(WHITE);           //his eye
setfillstyle(1,WHITE);
fillellipse(285,185,5,1);
fillellipse(315,185,5,1);

setcolor(getbkcolor());
setfillstyle(1,getbkcolor());
fillellipse(285,185,1,1);    //his eye ball
fillellipse(315,185,1,1);

 setlinestyle(0,0,0);   //his nose
line(295,192,292,205);
line(302,192,304,205);
line(292,205,304,205);

for(i=1;i<6;i+=1)             //his mooch
arc(300,232,60,120,20+i);

 setlinestyle(0,0,3);
line(288,210,280,225);       //his mooch
line(311,210,318,225);

setlinestyle(0,0,0);
arc(300,205,230,310,12);     //his mouth
arc(300,227,60,120,13);

setlinestyle(0,0,3);
for(i=1;i<=10;i+=4)         //his dadhi
line(295+i,220,295+i,230);


setlinestyle(0,0,0);
line(285,227,285,240);  //his neck
line(315,227,315,240);

setlinestyle(0,0,3);
line(285,240,235,249);    //his  coat base and right hand
line(315,240,342,249);
line(230,255,250,320);
arc(237,255,90,180,6);
line(250,320,340,310);
line(270,270,275,290);
line(275,290,330,285);
setlinestyle(0,0,3);
line(330,285,340,310);
line(325,285,335,310);
setlinestyle(0,0,0);


setlinestyle(0,0,0);
arc(340,330,70,100,40);
arc(340,335,70,90,40);
arc(340,340,70,90,40);     //his finger
arc(340,345,70,90,40);
arc(340,350,70,90,40);
arc(315,305,350,20,40);
setlinestyle(0,0,3);

line(342,200,342,290);
line(365,200,350,290);
arc(355,232,71,110,35); //his stick
line(342,310,340,320);
line(347,310,349,320);
line(340,320,349,320);

line(285,240,320,250);//his left hand
line(315,240,305,245);
line(320,250,323,285);
circle(310,260,2);
circle(311,270,2);
circle(312,280,2);
line(356,252,360,253);
line(360,253,365,328);
line(330,270,333,290);
line(365,328,280,318);

rectangle(150,110,520,340);
setcolor(BLUE);
settextstyle(6,1,7);
outtextxy(140,110,"WANTED");
settextstyle(2,0,5);
textdisp(390,150,"Name : X");
textdisp(390,170,"Age : 28 year");
textdisp(390,190,"Professional");
textdisp(410,210,"criminal");
textdisp(390,250,"Reward : 10000$");

delay(1000);
setcolor(BLUE);
settextstyle(10,0,3);
outtextxy(210,200,"WANTED");
rectangle(190,210,390,250);
delay(800);

//*********************************************************************************
setcolor(getbkcolor());
for(i=1;i<getmaxx();i++)
{
line(0+i,0,0+i,getmaxy());
delay(1);
}
//**************************************************************************************

setfillstyle(8,getbkcolor());            //background color and style
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
outtextxy(200,3,"RUN 4 LIFE");


setcolor(WHITE);          //work place designed
setfillstyle(1,WHITE);
bar(100,100,550,350);


setcolor(BLUE);
for(i=1;i<=5;i++)
{                           //work place border
rectangle(100-i,100-i,550+i,350+i);
}

setcolor(getbkcolor());

ellipse(300,225,0,360,15,18);
setlinestyle(0,0,3);            //b bos's hat and face
line(270,220,330,220);
setfillstyle(1,BLACK);
bar(285,200,315,220);


//******************************************
for(i=0;i<=15;i+=5)
arc(330-i,225,160,210,30);
		      //b bos's hair
for(i=0;i<=15;i+=5)
arc(270+i,225,330,20,30);
//********************************************

setlinestyle(0,0,0);
line(288,245,285,250);
line(312,245,315,250);
line(288,245,312,245);
line(285,250,315,250);

line(285,250,260,255);
line(315,250,340,255);

line(260,255,255,315);          //boss coat
line(255,315,265,315);

line(340,255,345,315);
line(345,315,335,315);

line(269,269,266,345);
line(329,269,334,345);
line(300,310,300,345);
//******************************************************

ellipse(420,180,0,360,100,50);

//***********************************************************
 for(i=1;i<=20;i++)
 arc(420,260,0,180,i);        //hero's cap

//*********************************************************
 for(i=1;i<=25;i+=2)
 arc(450-i,275,150,210,30);
				 //hero's hair
  for(i=1;i<=25;i+=2)
 arc(390+i,275,330,30,30);

setlinestyle(0,0,3);
 for(i=1;i<=25;i+=5)
 arc(450-i,275,150,210,30);
  for(i=1;i<=25;i+=5)
 arc(390+i,275,330,30,30);
//********************************************************

 setlinestyle(0,0,0);
 arc(390,350,60,130,50);

 arc(455,350,50,120,50);

  arc(375,335,130,185,30);

   arc(360,350,110,190,20);      //his muscles

  arc(360,335,310,20,20);

 arc(465,330,340,35,30);

  arc(475,335,160,230,20);

  arc(465,350,0,40,30);

  arc(420,345,60,120,50);

  arc(400,330,190,250,20);

  arc(435,330,290,350,20);

  line(383,342,386,350);
  line(453,341,450,350);


  line(410,290,410,295);
  line(430,290,430,295);

//***************three buildings
  for(i=1;i<=100;i+=3)
  arc(180,380-i,60,120,30);

    for(i=1;i<=200;i+=3)
  arc(120,380-i,60,120,30);

    for(i=1;i<=150;i+=3)
  arc(150,380-i,60,120,30);
//*********************************************

boss_spk();
settextstyle(2,0,5);
setcolor(BLUE);
textdisp(370,150,"Hello X... ");
textdisp(350,170,"How are you...");
setcolor(WHITE);
delay(800);
outtextxy(370,150,"Hello X... ");
outtextxy(350,170,"How are you...");
herospk();
setcolor(BLUE);
textdisp(370,150,"Fine...");
textdisp(350,170,"What's the problem");
setcolor(WHITE);
delay(800);
outtextxy(370,150,"Fine...");
outtextxy(350,170,"What's the problem");
boss_spk();
setcolor(BLUE);
textdisp(370,150,"I have a plan");
textdisp(350,170,"A great job for you..");
setcolor(WHITE);
delay(800);
outtextxy(370,150,"I have a plan");
outtextxy(350,170,"A great job for you..");
setcolor(BLUE);
textdisp(360,150,"You have to steal");
textdisp(340,170,"EUROPEAN COINS for me.");
setcolor(WHITE);
delay(800);
outtextxy(360,150,"You have to steal");
outtextxy(340,170,"EUROPEAN COINS for me.");
herospk();
setcolor(BLUE);
textdisp(360,150,"But after this i will ");
textdisp(340,170,"left this business");
setcolor(WHITE);
delay(800);
outtextxy(360,150,"But after this i will ");
outtextxy(340,170,"left this business");
boss_spk();
setcolor(BLUE);
textdisp(360,150,"Ok...");
textdisp(340,170,"Best of luck...");
delay(500);

//*********************************************************************************
setcolor(getbkcolor());
for(i=1;i<getmaxx();i++)
{
line(0+i,0,0+i,getmaxy());
delay(1);
}
//**************************************************************************************


setfillstyle(8,getbkcolor());            //background color and style
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
outtextxy(200,3,"RUN 4 LIFE");


setcolor(WHITE);          //work place designed
setfillstyle(1,WHITE);
bar(100,100,550,350);


setcolor(BLUE);
for(i=1;i<=5;i++)
{                           //work place border
rectangle(100-i,100-i,550+i,350+i);
}


setcolor(BLUE);
setfillstyle(1,BLUE);
for(i=1;i<400;i+=100)
bar(150+i,100,(150+i)+50,350);

setcolor(LIGHTBLUE);
setfillstyle(1,LIGHTBLUE);
for(i=1;i<300;i+=100)
bar(200+i,100,(200+i)+50,350);

setcolor(CYAN);
setfillstyle(1,CYAN);
for(i=1;i<250;i+=50)
bar(150,100+i,500,(100+i)+20);

setcolor(GREEN);
setfillstyle(1,GREEN);
bar(200,100,450,130);
setcolor(YELLOW);
settextstyle(3,0,3);
outtextxy(260,100,"The Musiuem");
rectangle(200,100,450,130);
setfillstyle(1,YELLOW);
bar(100,250,250,350);
setcolor(WHITE);
setfillstyle(1,WHITE);
bar(100+5,250+5,250-5,350-5);
setcolor(BLUE);
settextstyle(2,0,5);
outtextxy(150,250,"Notice");
outtextxy(100,260," The musiuem is open");
outtextxy(100,270," for all to see the");
outtextxy(100,280," European Gold Coin");
outtextxy(100,290," The musiuem is open");
outtextxy(100,300," for three days.");
outtextxy(100,310," Please don't touch");
outtextxy(100,320," the coins.");

setcolor(getbkcolor());
//***********************************************************
 for(i=1;i<=20;i++)
 arc(420,260,0,180,i);        //hero's cap

//*********************************************************
 for(i=1;i<=25;i+=2)
 arc(450-i,275,150,210,30);
				 //hero's hair
  for(i=1;i<=25;i+=2)
 arc(390+i,275,330,30,30);

setlinestyle(0,0,3);
 for(i=1;i<=25;i+=5)
 arc(450-i,275,150,210,30);
  for(i=1;i<=25;i+=5)
 arc(390+i,275,330,30,30);
//********************************************************

 setlinestyle(0,0,0);
 for(i=10;i<=50;i++)
 arc(390,350,60,130,i);

 for(i=10;i<=50;i++)
 arc(455,350,50,120,i);

  for(i=0;i<=30;i++)
  arc(375,335,130,185,i);

   for(i=0;i<=20;i++)
   arc(360,350,110,190,i);      //his muscles

 for(i=0;i<=20;i++)
  arc(360,335,220,20,i);

 for(i=0;i<=30;i++)
 arc(465,330,340,35,i);

  for(i=0;i<=20;i++)
  arc(475,335,160,330,i);

  for(i=0;i<=30;i++)
  arc(465,350,0,40,i);

  for(i=0;i<=50;i++)
  arc(420,345,60,120,i);

  for(i=0;i<=20;i++)
  arc(400,330,190,250,i);

 for(i=0;i<=20;i++)
  arc(435,330,290,350,i);

  for(i=1;i<50;i++)
  {
  line(383+i,302,386+i,350);
  line(453-i,302,450-i,350);
  }
  line(410,290,410,295);
  line(430,290,430,295);

setlinestyle(0,0,3);
setcolor(LIGHTBLUE);
for(i=1;i<getmaxx();i++)
{
line(0,400,0+i,400);
delay(2);
}
for(i=1;i<40;i++)
{
line(0,400+i,getmaxx(),400+i);
delay(10);
}
setcolor(RED);
settextstyle(8,0,5);
outtextxy(2,390,"X ");
setcolor(YELLOW);
settextstyle(8,0,2);
textdisp(40,400,"I am here boss. It's too secured place");
setlinestyle(0,0,3);
setcolor(RED);
for(i=1;i<getmaxx();i++)
{
line(0,400,0+i,400);
delay(2);
}
for(i=1;i<40;i++)
{
line(0,400+i,getmaxx(),400+i);
delay(10);
}
setcolor(LIGHTBLUE);
settextstyle(8,0,5);
outtextxy(2,390,"B ");
setcolor(YELLOW);
settextstyle(8,0,2);
textdisp(40,400,"Never mind...You are the best...");

delay(500);
//*********************************************************************************
setcolor(getbkcolor());
for(i=1;i<getmaxx();i++)
{
line(0+i,0,0+i,getmaxy());
delay(1);
}
//**************************************************************************************
setlinestyle(0,0,0);
setfillstyle(8,getbkcolor());            //background color and style
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
outtextxy(200,3,"RUN 4 LIFE");


setcolor(7);          //work place designed
setfillstyle(1,7);
bar(100,100,550,350);


setcolor(BLUE);
for(i=1;i<=5;i++)
{                           //work place border
rectangle(100-i,100-i,550+i,350+i);
}

setcolor(YELLOW);
setfillstyle(1,YELLOW);
for(i=1;i<60;i+=10)
fillellipse(125+i,218,5,5);

setcolor(BROWN);
setfillstyle(1,BROWN);
bar(100,250,200,350);

setcolor(BLUE);
for(i=0;i<30;i++)
arc(150,220,180,360,i);

setcolor(BLUE);
for(i=1;i<=105;i+=5)
line(100+i,200,100+i,250);
for(i=1;i<50;i+=5)
line(100,200+i,200,200+i);

setcolor(getbkcolor());
//***********************************************************
 for(i=1;i<=20;i++)
 arc(420,260,0,180,i);        //hero's cap

//*********************************************************
 for(i=1;i<=25;i+=2)
 arc(450-i,275,150,210,30);
				 //hero's hair
  for(i=1;i<=25;i+=2)
 arc(390+i,275,330,30,30);

setlinestyle(0,0,3);
 for(i=1;i<=25;i+=5)
 arc(450-i,275,150,210,30);
  for(i=1;i<=25;i+=5)
 arc(390+i,275,330,30,30);
//********************************************************

 setlinestyle(0,0,0);
 for(i=10;i<=50;i++)
 arc(390,350,60,130,i);

 for(i=10;i<=50;i++)
 arc(455,350,50,120,i);

  for(i=0;i<=30;i++)
  arc(375,335,130,185,i);

   for(i=0;i<=20;i++)
   arc(360,350,110,190,i);      //his muscles

 for(i=0;i<=20;i++)
  arc(360,335,220,20,i);

 for(i=0;i<=30;i++)
 arc(465,330,340,35,i);

  for(i=0;i<=20;i++)
  arc(475,335,160,330,i);

  for(i=0;i<=30;i++)
  arc(465,350,0,40,i);

  for(i=0;i<=50;i++)
  arc(420,345,60,120,i);

  for(i=0;i<=20;i++)
  arc(400,330,190,250,i);

 for(i=0;i<=20;i++)
  arc(435,330,290,350,i);

  for(i=1;i<50;i++)
  {
  line(383+i,302,386+i,350);
  line(453-i,302,450-i,350);
  }
  line(410,290,410,295);
  line(430,290,430,295);

setlinestyle(0,0,3);
setcolor(LIGHTBLUE);
for(i=1;i<getmaxx();i++)
{
line(0,400,0+i,400);
delay(2);
}
for(i=1;i<40;i++)
{
line(0,400+i,getmaxx(),400+i);
delay(10);
}
setcolor(RED);
settextstyle(8,0,5);
outtextxy(2,390,"X ");
setcolor(YELLOW);
settextstyle(8,0,2);
textdisp(40,400,"Boss.. I can steal the coins but police is here.");

setlinestyle(0,0,3);
setcolor(RED);
for(i=1;i<getmaxx();i++)
{
line(0,400,0+i,400);
delay(2);
}
for(i=1;i<40;i++)
{
line(0,400+i,getmaxx(),400+i);
delay(10);
}
setcolor(LIGHTBLUE);
settextstyle(8,0,5);
outtextxy(2,390,"B ");
setcolor(YELLOW);
settextstyle(8,0,2);
textdisp(40,400,"Outside of musiuem there is a race course");
setcolor(RED);
for(i=1;i<40;i++)
{
line(0,400+i,getmaxx(),400+i);
}
setcolor(LIGHTBLUE);
settextstyle(8,0,5);
outtextxy(2,390,"B ");
setcolor(YELLOW);
settextstyle(8,0,2);
textdisp(40,400,"Don't worry.. You can get a car from there...");
setcolor(RED);
for(i=1;i<40;i++)
{
line(0,400+i,getmaxx(),400+i);
}
setcolor(LIGHTBLUE);
settextstyle(8,0,5);
outtextxy(2,390,"B ");
setcolor(YELLOW);
settextstyle(8,0,2);
textdisp(40,400,"and after it you have to save my coins");
delay(500);
//*********************************************************************************
setcolor(getbkcolor());
for(i=1;i<getmaxx();i++)
{
line(0+i,0,0+i,getmaxy());
delay(1);
}
//**************************************************************************************
setfillstyle(8,getbkcolor());            //background color and style
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
outtextxy(200,3,"RUN 4 LIFE");


setcolor(WHITE);          //work place designed
setfillstyle(1,WHITE);
bar(100,100,550,350);


setcolor(BLUE);
for(i=1;i<=5;i++)
{                           //work place border
rectangle(100-i,100-i,550+i,350+i);
}

car(150,150);
car(250,150);
car(350,150);
car(450,150);

setfillstyle(1,YELLOW);
bar(100,250,250,350);
setcolor(BLUE);
setfillstyle(1,BLUE);
bar(100+5,250+5,250-5,350-5);
setcolor(RED);
settextstyle(8,0,4);
outtextxy(120,250,"RACE");
outtextxy(120,290,"POINT");
setcolor(getbkcolor());
//***********************************************************
 for(i=1;i<=20;i++)
 arc(420,260,0,180,i);        //hero's cap

//*********************************************************
 for(i=1;i<=25;i+=2)
 arc(450-i,275,150,210,30);
				 //hero's hair
  for(i=1;i<=25;i+=2)
 arc(390+i,275,330,30,30);

setlinestyle(0,0,3);
 for(i=1;i<=25;i+=5)
 arc(450-i,275,150,210,30);
  for(i=1;i<=25;i+=5)
 arc(390+i,275,330,30,30);
//********************************************************

 setlinestyle(0,0,0);
 for(i=10;i<=50;i++)
 arc(390,350,60,130,i);

 for(i=10;i<=50;i++)
 arc(455,350,50,120,i);

  for(i=0;i<=30;i++)
  arc(375,335,130,185,i);

   for(i=0;i<=20;i++)
   arc(360,350,110,190,i);      //his muscles

 for(i=0;i<=20;i++)
  arc(360,335,220,20,i);

 for(i=0;i<=30;i++)
 arc(465,330,340,35,i);

  for(i=0;i<=20;i++)
  arc(475,335,160,330,i);

  for(i=0;i<=30;i++)
  arc(465,350,0,40,i);

  for(i=0;i<=50;i++)
  arc(420,345,60,120,i);

  for(i=0;i<=20;i++)
  arc(400,330,190,250,i);

 for(i=0;i<=20;i++)
  arc(435,330,290,350,i);

  for(i=1;i<50;i++)
  {
  line(383+i,302,386+i,350);
  line(453-i,302,450-i,350);
  }
  line(410,290,410,295);
  line(430,290,430,295);




setlinestyle(0,0,3);
setcolor(LIGHTBLUE);
for(i=1;i<getmaxx();i++)
{
line(0,400,0+i,400);
delay(2);
}
for(i=1;i<40;i++)
{
line(0,400+i,getmaxx(),400+i);
delay(10);
}
setcolor(RED);
settextstyle(8,0,5);
outtextxy(2,390,"X ");
setcolor(YELLOW);
settextstyle(8,0,2);
textdisp(40,400,"Boss.. I have got the money....I am in race course");

setlinestyle(0,0,3);
setcolor(RED);
for(i=1;i<getmaxx();i++)
{
line(0,400,0+i,400);
delay(2);
}
for(i=1;i<40;i++)
{
line(0,400+i,getmaxx(),400+i);
delay(10);
}
setcolor(LIGHTBLUE);
settextstyle(8,0,5);
outtextxy(2,390,"B ");
setcolor(YELLOW);
settextstyle(8,0,2);
textdisp(40,400,"Good job X...just come here...save my coins");
setcolor(RED);
for(i=1;i<40;i++)
{
line(0,400+i,getmaxx(),400+i);
}
setcolor(LIGHTBLUE);
settextstyle(8,0,5);
outtextxy(2,390,"B ");
setcolor(YELLOW);
settextstyle(8,0,2);
textdisp(40,400,"Remember if you can't save my coins then...");
setlinestyle(0,0,3);
setcolor(LIGHTBLUE);
for(i=1;i<getmaxx();i++)
{
line(0,400,0+i,400);
delay(2);
}
for(i=1;i<40;i++)
{
line(0,400+i,getmaxx(),400+i);
delay(10);
}
setcolor(RED);
settextstyle(8,0,5);
outtextxy(2,390,"X ");
setcolor(YELLOW);
settextstyle(8,0,2);
textdisp(40,400,"Then...? you will kill me...?");
setlinestyle(0,0,3);
setcolor(RED);
for(i=1;i<getmaxx();i++)
{
line(0,400,0+i,400);
delay(2);
}
for(i=1;i<40;i++)
{
line(0,400+i,getmaxx(),400+i);
delay(10);
}
setcolor(LIGHTBLUE);
settextstyle(8,0,5);
outtextxy(2,390,"B ");
setcolor(YELLOW);
settextstyle(8,0,2);
textdisp(40,400,"Yes..I will kill you...and I will kill your family...");
setcolor(RED);
for(i=1;i<40;i++)
{
line(0,400+i,getmaxx(),400+i);
}
setcolor(LIGHTBLUE);
settextstyle(8,0,5);
outtextxy(2,390,"B ");
setcolor(YELLOW);
settextstyle(8,0,2);
textdisp(40,400,"You know that I can do it... so just run for life...");
setcolor(LIGHTBLUE);
for(i=1;i<getmaxx();i++)
{
line(0,400,0+i,400);
delay(2);
}
for(i=1;i<40;i++)
{
line(0,400+i,getmaxx(),400+i);
delay(10);
}
setcolor(RED);
settextstyle(8,0,5);
outtextxy(2,390,"X ");
setcolor(YELLOW);
settextstyle(8,0,2);
textdisp(40,400,"This is cheating...Boss...I am your friend...");

setlinestyle(0,0,3);
setcolor(RED);
for(i=1;i<getmaxx();i++)
{
line(0,400,0+i,400);
delay(2);
}
for(i=1;i<40;i++)
{
line(0,400+i,getmaxx(),400+i);
delay(10);
}
setcolor(LIGHTBLUE);
settextstyle(8,0,5);
outtextxy(2,390,"B ");
setcolor(YELLOW);
settextstyle(8,0,2);
textdisp(40,400,"I don't care for your friendship...");
setcolor(RED);
for(i=1;i<40;i++)
{
line(0,400+i,getmaxx(),400+i);
delay(10);
}
setcolor(LIGHTBLUE);
settextstyle(8,0,5);
outtextxy(2,390,"B ");
setcolor(YELLOW);
settextstyle(8,0,2);
textdisp(40,400,"You are just an employee for me...");
setcolor(RED);
for(i=1;i<40;i++)
{
line(0,400+i,getmaxx(),400+i);
delay(10);
}
setcolor(LIGHTBLUE);
settextstyle(8,0,5);
outtextxy(2,390,"B ");
setcolor(YELLOW);
settextstyle(8,0,2);
textdisp(40,400,"So don't waste your time...run...");
delay(1000);
//*********************************************************************************
setcolor(getbkcolor());
for(i=1;i<getmaxx();i++)
{
line(0+i,0,0+i,getmaxy());
delay(1);
}
//**************************************************************************************
setfillstyle(8,getbkcolor());            //background color and style
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
outtextxy(200,3,"RUN 4 LIFE");


setcolor(WHITE);          //work place designed
setfillstyle(1,WHITE);
bar(100,100,550,350);


setcolor(BLUE);
for(i=1;i<=5;i++)
{                           //work place border
rectangle(100-i,100-i,550+i,350+i);
}
setcolor(8);
setfillstyle(1,8);
bar(150,100,500,350);
setcolor(YELLOW);
setfillstyle(1,YELLOW);
bar(100,100,150,350);
bar(500,100,550,350);
setcolor(WHITE);
setfillstyle(1,WHITE);
for(i=1;i<250;i+=70)
bar(295,100+i,305,(100+i)+40);

pcar1();
pfcar();
car(320,250);
///////
setlinestyle(0,0,3);
setcolor(LIGHTBLUE);
for(i=1;i<getmaxx();i++)
{
line(0,400,0+i,400);
delay(2);
}
for(i=1;i<40;i++)
{
line(0,400+i,getmaxx(),400+i);
delay(10);
}
setcolor(RED);
settextstyle(8,0,5);
outtextxy(2,390,"X ");
setcolor(YELLOW);
settextstyle(8,0,2);
textdisp(40,400,"Yes I have to run for my life...");

delay(500);
setcolor(getbkcolor());
setfillstyle(1,getbkcolor());
for(i=1;i<350;i++)
{
bar(getmaxx()/2,0,(getmaxx()/2)-i,getmaxy());
bar(getmaxx()/2,0,(getmaxx()/2)+i,getmaxy());
delay(5);
}
delay(500);
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

setcolor(getbkcolor());
for(j=1;j<getmaxy();j+=2)
{
for(i=1;i<getmaxx();i+=2)
{
putpixel(i,j,getbkcolor());
}
delay(5);
}
setlinestyle(0,0,3);
for(i=1;i<getmaxx();i++)
{
line(0,getmaxy()-i,getmaxx(),getmaxy()-i);
delay(5);
}

setlinestyle(0,0,0);
setcolor(YELLOW);
settextstyle(3,0,5);
outtextxy(200,45,"Loading...");
setcolor(LIGHTBLUE);
settextstyle(2,0,5);
outtextxy(200,200,"Key Configuration : ");
outtextxy(150,230,"Up key       :  Acceleration");
outtextxy(150,245,"Down key     :  Decrement in speed");
outtextxy(150,260,"Left key     :  Left direction");
outtextxy(150,275,"Up key       :  Right direction");
outtextxy(150,290,"Space        :  Fire");
outtextxy(150,305,"[+]          :  Gear up");
outtextxy(150,320,"[-]          :  Gear down");
outtextxy(150,335,"B/b          :  Boosters");
outtextxy(150,350,"0            :  Emergency brakes");
outtextxy(150,365,"H/h          :  Highest Speed");

setlinestyle(0,0,3);
loading();

setcolor(getbkcolor());
setlinestyle(0,0,3);
for(i=1;i<getmaxx();i++)
{
line(0,getmaxy()-i,getmaxx(),getmaxy()-i);
delay(1);
}


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
for(i=1;i<20;i++)
{
line(80,228+i,545,228+i);
//delay(7);
}
settextstyle(8,0,5);
setusercharsize(2,1,1,2);
setcolor(LIGHTRED);
outtextxy(80,225,"Run For Life");
for(j=1;j<=360;j+=5)
{
setcolor(2);
sound(1+j);
pieslice(100,360,0,j,50);
pieslice(300,360,0,j,50);
pieslice(500,360,0,j,50);
//
}
setcolor(1);
settextstyle(1,0,5);
outtextxy(94,330,"3");
outtextxy(294,330,"3");
outtextxy(494,330,"3");
setcolor(getmaxcolor());
settextstyle(1,0,5);
//outtextxy(290,130,"3");
delay(200);
setcolor(1);
//outtextxy(290,130,"3");
for(j=1;j<=360;j+=5)
{
setcolor(4);
sound(1+j);
pieslice(100,360,0,j,50);
pieslice(300,360,0,j,50);
pieslice(500,360,0,j,50);
//circle(300,150,j+j/5);
}
setcolor(1);
settextstyle(1,0,5);
outtextxy(94,330,"2");
outtextxy(293,330,"2");
outtextxy(494,330,"2");
setcolor(getmaxcolor());
settextstyle(1,0,5);
//outtextxy(290,130,"2");
delay(200);
setcolor(1);
//outtextxy(290,130,"2");
for(j=1;j<=360;j+=5)
{
setcolor(2);
sound(1+j);
pieslice(100,360,0,j,50);
pieslice(300,360,0,j,50);
pieslice(500,360,0,j,50);
//circle(300,150,j+j/5);
}
setcolor(1);
settextstyle(1,0,5);
outtextxy(94,330,"1");
outtextxy(294,330,"1");
outtextxy(494,330,"1");
setcolor(getmaxcolor());
settextstyle(1,0,5);
//outtextxy(290,130,"1");
delay(200);
nosound();
cleardevice();

}
