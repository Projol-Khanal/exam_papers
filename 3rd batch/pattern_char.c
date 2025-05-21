/*WAP in C to print the pattern give below                                                   
PQRSRQP
PQR RQP
PQ   QP
P     P
*/
#include<stdio.h>
int main()
{
   int i, j;
   char k;
   for(i = 1; i <= 4; i++)  
   {
      k = 'P';
      for(j = 1; j <= 7; j++)  
      {
         if(j <= 5-i || j >= 3+i)
         {
            printf("%c", k);
            j<4?k++:k--;

         }
         else
         {
            printf(" ");
            if(j == 4) // Important: in middle, skip increment/decrement after space
            k--;
         }
      }
      printf("\n");
   }
   return 0;
}
