// WAP to print the given pattern
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i && j>=1)
            printf("%d ",j);

            else
            printf(" ");
            
        }
        printf("\n");
    }
}