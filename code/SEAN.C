#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<time.h>
#include<dos.h>
#include<bios.h>
#include<string.h>
#include<stdlib.h>
#include "c:\R4L\citytools.c"


void sean1()
{
int i,j;
randomize();
house1(80,0,random(100),random(100));
house4(64,85,random(100),random(100));
house4(64,155,random(100),random(100));
house1(80,210,random(100),random(100));
house1(65,295,random(100),random(100));
house1(80,380,random(100),random(100));
house4(62,425,random(100),random(100));
house1(502,0,random(100),random(100));
house1(512,60,random(100),random(100));
house1(500,120,random(100),random(100));
house4(510,180,random(100),random(100));
house1(505,240,random(100),random(100));
house4(510,300,random(100),random(100));
house3(505,360,random(100),random(100));
for(i=0;i<500;i+=120)
streetlight(165,i);
for(i=0;i<500;i+=120)
streetlight1(473,i);
signal(150,150);
signal(480,300);
pco(145,45);
pco(465,405);
}


void sean3()
{
int i;
randomize();
house1(62,10,random(100),random(100));
house1(80,120,random(100),random(100));
house4(60,250,random(100),random(100));
house1(75,350,random(100),random(100));
house4(502,0,random(100),random(100));
house4(510,100,random(100),random(100));
house1(505,200,random(100),random(100));
house1(525,300,random(100),random(100));
house1(502,400,random(100),random(100));

for(i=0;i<500;i+=120)
streetlight(165,i);

for(i=0;i<500;i+=120)
streetlight1(473,i);

for(i=30;i<500;i+=170)
stop(145,i);

for(i=60;i<500;i+=170)
stop(485,i);
}

void sean4()
{
int i;
randomize();
house2(66,-50,random(100),random(100));
house2(62,1,random(100),random(100));
house2(65,150,random(100),random(100));
house2(67,300,random(100),random(100));

house2(502,10,random(100),random(100));
house2(505,220,random(100),random(100));

for(i=0;i<500;i+=100)
streetlight(165,i);

for(i=0;i<500;i+=100)
streetlight1(473,i);

for(i=0;i<500;i+=180)
stop(145,i);

for(i=60;i<500;i+=180)
stop(485,i);
}


void sean5()
{
int i;
for(i=0;i<500;i+=100)
streetlight(165,i);

for(i=0;i<500;i+=100)
streetlight1(473,i);

pco(148,80);
}


void sean6()
{
int i;
for(i=0;i<500;i+=120)
stop(150,i);

for(i=60;i<500;i+=120)
stop(480,i);
}


void sean7()
{
int i;

setcolor(3);
setfillstyle(6,3);
bar(130,0,140,25000);
bar(500,0,510,25000);

setcolor(7);
setfillstyle(1,7);
bar(130,0,90,25000);
bar(510,0,550,25000);

for(i=0;i<500;i+=120)
stop(100,i);

for(i=60;i<500;i+=120)
stop(530,i);
}
