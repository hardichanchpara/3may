#include<stdio.h>
#include<conio.h>

main()
{
   int a=100,b=20,c=40;
   clrscr();
   if(a>b)
   {
    if(a>c)
     {
       printf("A is maximum");
     }
    else
     {
      printf("C is maximum");
     }
   }
    else
   {
    if (b>c)
     {
      printf("B is maximum");
     }
    else
     {
      printf("C is maximum");
     }
   }
   getch();
}

