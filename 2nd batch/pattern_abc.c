/*
e. Write a program to print the following pattern:­
   A 
  ABA 
 ABCBA 
ABCDCBA

*/



#include<stdio.h>
int main()
{
    int i, j;
    char k;
    for(i = 1; i <= 4; i++)  // 4 rows
    {
        k='A';
        
        for(j = 1; j <= 7; j++)  // 7 columns
        {
            if(j >= 5-i && j <= 3+i)  // Between these columns
            {
                printf("%c",k);
                if(j < 4)   // Before the center
                    k++;
                else        // After the center
                    k--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
