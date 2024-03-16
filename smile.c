#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
   int gd = DETECT, gm;
   int i;
   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
   printf("\n\t1.Happy\n\t2.sad\n\t3.neutral\n\t4.Angry ");

   do
   {
   printf("\n\n\n Enter your mood:");
   scanf("%d",&i);
   cleardevice();
   switch(i)
   {
     case 1:
     {

       setcolor(YELLOW);
       circle(50, 100, 25);
       setfillstyle(SOLID_FILL, YELLOW);
       floodfill(50, 100, YELLOW);

       setcolor(BLACK);
       setfillstyle(SOLID_FILL, BLACK);
       fillellipse(44, 85, 2, 6);
       fillellipse(56, 85, 2, 6);

       ellipse(50, 100, 205, 335, 20, 9);
       ellipse(50, 100, 205, 335, 20, 10);
       ellipse(50, 100, 205, 335, 20, 11);
       break;
     }
     case 2:
     {
       setcolor(YELLOW);
       circle(50, 100, 25);
       setfillstyle(SOLID_FILL, YELLOW);
       floodfill(50, 100, YELLOW);

       setcolor(BLACK);
       setfillstyle(SOLID_FILL, BLACK);
       fillellipse(44, 85, 2, 6);
       fillellipse(56, 85, 2, 6);

       ellipse(50, 110, 0, 170, 20, 9);
       ellipse(50, 110, 0, 170, 20, 10);
       ellipse(50, 110, 0, 170, 20, 11);
       break;

     }
     case 3:
     {

       setcolor(YELLOW);
       circle(50, 100, 25);
       setfillstyle(SOLID_FILL, YELLOW);
       floodfill(50, 100, YELLOW);

       setcolor(BLACK);
       setfillstyle(SOLID_FILL, BLACK);
       fillellipse(44, 85, 2, 6);
       fillellipse(56, 85, 2, 6);

       ellipse(50, 100, 255, 290, 20, 9);
       ellipse(50, 100, 255, 290,20, 10);
       ellipse(50, 100, 255, 290,20, 11);
       break;
     }
      case 4:
     {

       setcolor(RED);
       circle(50, 100, 25);
       setfillstyle(SOLID_FILL, RED);
       floodfill(50, 100, RED);

       setcolor(BLACK);
       setfillstyle(SOLID_FILL, BLACK);
       fillellipse(44, 85, 2, 6);
       fillellipse(56, 85, 2, 6);

       ellipse(50, 114, 25, 160, 20, 9);
       ellipse(50, 114, 25, 160,20, 10);
       ellipse(50, 114, 25, 160,20, 11);
       break;
     }
   }
 }while(i!=5);

   return 0;
}