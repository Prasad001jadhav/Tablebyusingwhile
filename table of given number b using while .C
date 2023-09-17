#include<stdio.h>
#include<conio.h>
int main ()
{
   int  i = 1,no = 0 ;
   
   printf("\n enter a number to display its   table  =   ");
   scanf("%d",&no);
   
   printf("\ntable of %d is = \n",no);
   
   while (i<=10)
   {
   	printf("\n %d", i*no);
   	i++;	
   }
  
    printf("\n\n thanks");
    
    getch();
    return 0;
}	
